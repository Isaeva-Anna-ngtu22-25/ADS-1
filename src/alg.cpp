// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t ch) {
    if (ch <= 1)
        return false;
    if (ch == 2 || ch == 3)
        return true;
    if (ch % 2 == 0)
        return false;
    for (uint64_t x = 5; x * x <= ch; x += 2)
        if (ch % x == 0)
            return false;
    return true;
}

uint64_t nPrime(uint64_t n) {
    uint64_t nP = 0;
    uint64_t nom = 0;
    for (uint64_t i = 2; nom < n; i++)
        if (checkPrime(i)) {
            nP = i;
            nom++;
        }
     return nP;
}

uint64_t nextPrime(uint64_t c) {
    uint16_t z = c + 1;
    while (!checkPrime(z))
        z++;
    return z;
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0;
    for (uint64_t x = 2; x < hbound; x++)
        if (checkPrime(x))
            sum+=x;
    return sum;
}
