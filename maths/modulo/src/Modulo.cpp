#include "Modulo.h"

utility::maths::Modulo::Modulo() {}

utility::maths::Modulo::~Modulo() {}

int utility::maths::Modulo::mod(int a, int m) const {
    return a % m;
}
