// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t ch) {
    if (ch <= 1)
        return false;
    if (ch <= 3)
        return true;
    if (ch % 2 == 0)
        return false;
    for (int x = 5; x * x <= ch; x += 2)
        if (ch % x == 0)
            return false;
    return true;
}

uint64_t nPrime(uint64_t n) {
    for (int x = 1; x++;) {
        if (int i = 0; i < n) {
            if (checkPrime(x)) {
                i++;
            }
        } else if (i == n) {
            return x;
        }
    }    
}

uint64_t nextPrime(uint64_t value) {
    while (!checkPrime(value)) {
        value++;
    }
    return value;
}

uint64_t sumPrime(uint64_t hbound) {
    int sum = 0;
    for (int x = 2; x < hbound; x++) {
        if (checkPrime(x)) {
            sum+=x;
        }
    }
    return sum;
}
