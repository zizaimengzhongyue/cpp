#include <iostream>

using namespace std;

class Num {
public:
    int n;
    Num(int n) { this->n = n; }
    Num* operator+(const Num& b)
    {
        Num* n = new Num(0);
        n->n = this->n + b.n;
        return n;
    }
};

int main()
{
    Num* n1 = new Num(3);
    Num* n2 = new Num(4);
    Num* n = *n1 + *n2;
    cout << n->n << endl;
    return 0;
}
