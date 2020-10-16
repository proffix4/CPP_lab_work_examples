#include <cstdlib>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
#include"func.h"

using namespace std;
int y, a, x;

int main(int argc, char** argv) {
    printf("Введите y,a,x: ");
    scanf("%d,%d,%d", &y, &a, &x);
    std::cout << func(y, a, x); //вызываем функцию и передаем в нее параметры 
    return 0;
}


