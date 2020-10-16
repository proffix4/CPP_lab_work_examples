#include <cstdlib>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>

int func(int y, int a, int x) {
    int n;
    n = (0.7 * exp(x - 5) + cos(y)) / sqrt(a * x * y);
    return n;
}

