#include <doctest.h>
#include "Jogo.h"

TEST_CASE("Testando get e set de rodadas do jogo"){
    CHECK(getNumRodadas(setNumRodadas(5)) == 5);
}
