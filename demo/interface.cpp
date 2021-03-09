#include <iostream>
#include <vector>

using namespace std;

class Car {
public:
    virtual double getPrice() = 0;
};

class Benze : public Car {
public:
    double getPrice() { return 300000; }
};

class Audi : public Car {
public:
    double getPrice() { return 200000; }
};

int main()
{
    vector<Car*> cs;
    Benze* b = new Benze();
    cs.push_back(b);
    Audi* a = new Audi();
    cs.push_back(a);
    for (int i = 0; i < cs.size(); i++) {
        cout << cs[i]->getPrice() << endl;
    }
    return 0;
}
