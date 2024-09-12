#include <iostream>

using namespace std;
class MyClass {
public:
    static int count; 

    MyClass() {
        count++;
    }

    static void printCount() { 
        cout << "Number of objects: " << count << endl;
    }
};

int MyClass::count = 0; 

int main() {
    MyClass obj1, obj2, obj3;

    MyClass::printCount(); 

    return 0;
}
