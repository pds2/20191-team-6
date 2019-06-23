#include <doctest.h>
#include "Baralho.h"


TEST_CASE("Testando o baralho e a funcao dar carta"){
    CHECK(darCarta().getNAipe() > 0 && darCarta().getNAipe() < 5);
    CHECK(darCarta().getNumeroCarta() > 0);
    CHECK(darCarta().getValor() > 0);
}
