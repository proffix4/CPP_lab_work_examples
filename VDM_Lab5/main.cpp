#include <cstdlib>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
///////////////////
#define power_one  d * (i + pow(a, 3));//определяет идентификатор 
//текст которого будет замещать данный идентификатор при его обнаружении в тексте программы
#define summ_one  pow(t, 2);
///////////////////
#define power_two  j + i;
using namespace std;

int main() {
    float a = 1, d = 2, t = 4, y1, p = 1, summ; //переменные к первому примеру
    float a2 = 1, b = 2, y2, p2 = 1; //переменные к второму примеру
    /////////////////////////////////////////////////////////////////////////
    for (float i = 1; i < 3; ++i) {//первый пример
        p *= power_one;
    }
    for (float j = 1; j < 3; ++j) {//первый пример
        summ += summ_one;
    }
    y1 = p / summ;
    cout << y1 << endl;
    //////////////////////////////////////
    for (float i = 1; i < 3; ++i) {//второй пример
        for (float j = 1; j < 3; ++j) {
            p2 *= power_two;
        }
        y2 = i / p2;
    }
    cout << y2;

    return 0;
}





