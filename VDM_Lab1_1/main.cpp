#include <cstdlib>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>


using namespace std; //пространство имен std для использование стандартных функции 

int main() {
    setlocale(LC_ALL, "Russian"); //подключение русского языка 
    short int a1, a2, quotient, power; //объявление переменных типа int
    printf("Введите два целых числа"); //вывод в консоль по типу классического C
    cout << "Введите число a1  "; //вывод в консоль по типу стандартного  C++
    cin>>a1; //Ввод в С++
    cout << endl;
    cout << "Введите число a1  ";
    cin>>a2;
    cout << endl;
    quotient = a1 / a2;
    power = pow(quotient, 4) / 25; //присвоение значений переменой power 
    printf("Квадрат частного двух целых чисел = %hd", power);
    return 0;
}
