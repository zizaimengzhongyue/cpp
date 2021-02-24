#include <iostream>

using namespace std;

class Node {
public:
    int val;
    shared_ptr<Node> prev;
    shared_ptr<Node> next;
    Node() { cout << "执行 Node 构造方法" << endl; }
    ~Node() { cout << "执行 Node 析构方法" << endl; }
};

class Node02 {
public:
    int val;
    weak_ptr<Node02> prev;
    weak_ptr<Node02> next;
    Node02() { cout << "执行 Node02 构造方法" << endl; }
    ~Node02() { cout << "执行 Node02 析构方法" << endl; }
};

void shared()
{
    shared_ptr<Node> sp1(new Node);
    shared_ptr<Node> sp2(new Node);
    sp1->next = sp2;
    sp2->prev = sp1;
}

void weak()
{
    shared_ptr<Node02> sp1(new Node02);
    shared_ptr<Node02> sp2(new Node02);
    sp1->next = sp2;
    sp2->prev = sp1;
}

int main()
{
    shared();
    cout << "此时只执行了构造方法，没有执行析构方法" << endl;
    weak();
    cout << "此时构造方法和析构方法都得到了执行" << endl;
}
