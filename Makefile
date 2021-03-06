CC := g++
SRCDIR := classes
#TSTDIR := tests
OBJDIR := build
BINDIR := bin

MAIN := main.cpp
#TESTER := program/tester.cpp

SRCEXT := cpp
SOURCES := $(wildcard $(SRCDIR)/*.$(SRCEXT))
OBJECTS := $(subst $(SRCDIR),$(OBJDIR),$(SOURCES:.$(SRCEXT)=.o))
#TSTSOURCES := $(shell find $(TSTDIR) -type f -name *.$(SRCEXT))

# -g debug, --coverage para cobertura
CFLAGS := --coverage -g -std=c++11 -Wall -O3
INC := -I include/ -I third_party/

all: main

$(OBJDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INC) -c -o $@ $<

main: $(OBJECTS)
	mkdir -p $(BINDIR)
	$(CC) $(CFLAGS) $(INC) $(MAIN) $^ -o $(BINDIR)/main

#tests: $(OBJECTS)
#	@mkdir -p $(BINDIR)
#	$(CC) $(CFLAGS) $(INC) $(TESTER) $(TSTSOURCES) $^ -o $(BINDIR)/tester
#	$(BINDIR)/tester

valgrind: main
	valgrind --leak-check=full --track-origins=yes $(BINDIR)/main

coverage:
	@mkdir -p coverage/
	@gcov $(SOURCES) -l -p -o build/
	@lcov -c --no-external --directory . --output-file coverage/coverage.info
	@genhtml coverage/coverage.info --output-directory coverage/
	@$(RM) *.gcda *.gcno

clean:
	@$(RM) -r $(OBJDIR)/* $(BINDIR)/* coverage/* *.gcda *.gcno

.PHONY: clean coverage
