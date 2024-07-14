#include <stdio.h>
#include <stdlib.h>
#include "hash_functions.c"

#define BASE 31

int generate_hash(int key) {
    return calculator(revertor(key));
}


int main() {

    int key = 404;

    printf("Hash Result: %d", generate_hash(key));

    EXIT_SUCCESS;
}