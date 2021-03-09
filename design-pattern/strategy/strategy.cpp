#include <iostream>

using namespace std;

class Position {
public:
    virtual string get_question() = 0;
    virtual string get_position() = 0;
};

class Sales : Position {
public:
    string get_question() { return "你之前的销售业绩是多少？"; }
    string get_position() { return "销售"; }
};

class Coder : Position {
public:
    string get_question() { return "你之前的技术栈是什么？"; }
    string get_position() { return "程序员"; }
};

class Interview {
public:
    string question(Position* p)
    {
        return p->get_position() + ": " + p->get_question();
    }
};

int main()
{
    Interview* i = new Interview();
    Sales* s = new Sales();
    Coder* c = new Coder();
    cout << i->question((Position*)s) << endl;
    cout << i->question((Position*)c) << endl;
    return 0;
}
