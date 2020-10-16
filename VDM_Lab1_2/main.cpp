#include <cstdlib>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>

int main() {
    float z1, x, y, t; //объявление вещественных переменных типа float
    std::printf("Введите исходные данные x,y,t \n");
    std::scanf("%f,%f,%f", &x, &y, &t);
    z1 = sin(x + exp(x)); //расчет синуса значения для работы с математическими функциями подключите библиотеку  math.h
    std::printf("Получилось z1 = %f", z1);
    return 0;
}

