#include <string>

class MyClass {
public:
    std::string get_time(); //получение текущего времени
    double sum(double x, double y); //пример метода с перезагрузкой
    int sum(int x, int y); //пример метода с перезагрузкой
};