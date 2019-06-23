#include <doctest.h>
#include "Carta.h"

TEST_CASE("Testando get e set de carta"){
    CHECK(getNaipe(setNaipe(2)) == 2);
    CHECK(getNumeroCarta(setNumeroCarta(13)) == 13);
    CHECK(getValor(setValor(8)) == 8);
    CHECK(getFlag(setFlag(false)) == false);
}
