// Created by Armando Liebenberg
// 05/09/2023 - 10:54 AM

#include <cstdio>
#include <math.h>

int main() {
    // n'th triangular number
    int value3 = (pow(333, 2) + 333) / 2 * 3;
    int value5 = (pow(199, 2) + 199) / 2 * 5;
    int both = (pow(66, 2) + 66) / 2 * 15;

    int total = value3 + value5 - both;
    printf("Total is: %d\n", total);

    return 0;
}