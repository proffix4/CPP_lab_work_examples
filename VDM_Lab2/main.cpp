#include <cstdlib>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>

using namespace std;

int main() {
    float a = 1, d = 2, t = 4, y1, p = 1, summ; //переменные к первому примеру
    float y2, p2 = 1; //переменные к второму примеру
    /////////////////////////////////////////////////////////////////////////
    for (float i = 1; i < 3; ++i) {//первый пример
        p *= d * (i + pow(a, 3));
    }
    for (float j = 1; j < 3; ++j) {//первый пример
        summ += pow(t, 2)*(j + 3);
    }
    y1 = p / summ;
    cout << y1 << endl;
    //////////////////////////////////////
    for (float i = 1; i < 3; ++i) {//второй пример
        for (float j = 1; j < 3; ++j) {
            p2 *= j + i;
        }
        y2 = i / p2;
    }
    cout << y2;
    return 0;
}

