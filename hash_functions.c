#include "hash_functions.h"
#include <stdlib.h>

int revertor(int value) {
    return value = ((value + value)/4) + 200;
}

int divisor(int value) {
    return (revertor(value) / 4 + 1000);
}

int calculator(int value) {
    int result = ((value + 1500 + 2500)/2 + (8000 + 1450) * 31);
    return abs((result * result));
}