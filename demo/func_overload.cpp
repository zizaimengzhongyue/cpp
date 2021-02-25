#include <iostream>

using namespace std;

class Add {
public:
    int add(int a, int b) { return a + b; }
    double add(double a, double b) { return a + b; }
    float add(float a, float b) { return a + b; }
};

int main()
{
    Add* a = new Add();
    cout << a->add(1, 2) << endl;
    cout << a->add(1.23, 2.34) << endl;
    cout << a->add(1.2, 2.3) << endl;
}
