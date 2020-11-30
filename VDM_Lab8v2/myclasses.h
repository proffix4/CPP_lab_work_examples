#ifndef HEADER_H
#define HEADER_H

#include <string>

using namespace std;

class MyClass {
private:
  string lastTime;

public:
  MyClass();                // Пустой конструктор
  MyClass(string lastTime); // Конструктор с параметром
  ~MyClass();               // Деструктор
  string getLastTime(); // Метод получения последнего запрошенного времени
  string get_time(); // Метод получения текущего времени
  double sum(double x, double y); // Пример метода с перезагрузкой
  int sum(int x, int y); // Пример метода с перезагрузкой
};

class MyClass2 : public MyClass {
public:
  void myPrint();
};

#endif

