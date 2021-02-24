#include <iostream>

using namespace std;

class Person {
public:
    char name[20];
    int age;
    char* getName() { return this->name; }
    int getAge() { return this->age; }
    Person(char name[20], int age)
    {
        cout << "执行 Person 构造方法" << endl;
        strcpy(this->name, name);
        this->age = age;
    }
    ~Person() { cout << "执行 Person 析构方法" << endl; }
};

int main()
{
    char name[20] = "张三";
    std::unique_ptr<Person> ps(new Person(name, 20));
    cout << ps->getName() << endl;
    cout << ps->getAge() << endl;
}
