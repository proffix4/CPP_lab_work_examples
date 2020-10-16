#include <iostream>
#include "myclasses.h"

using namespace std;

int main() {
    MyClass myClass;
    cout << myClass.get_time() << endl;
    cout << myClass.sum(12, 12) << endl;
    cout << myClass.sum(12.5, 12.5) << endl;
    return 0;
}

