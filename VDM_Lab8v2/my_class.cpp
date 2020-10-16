#include <iostream>
#include <string>
#include <ctime>

#include "myclasses.h"

using namespace std;

// РЕАЛИЗАЦИЯ МЕТОДОВ КЛАССА MyClass ---------
string MyClass::get_time() {
    time_t seconds = time(NULL);
    tm* timeinfo = localtime(&seconds);
    return asctime(timeinfo);
}

double MyClass::sum(double x, double y) {
    double d;
    d = x + y;
    return d;
}

int MyClass::sum(int x, int y) {
    int d;
    d = x + y;
    return d;
}
// -------------------------------