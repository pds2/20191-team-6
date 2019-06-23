#include <doctest.h>
#include "Pessoa.h"

TEST_CASE("Testando get e set Pessoa"){
    setAction(true);
    CHECK(getAction() == true);
}
