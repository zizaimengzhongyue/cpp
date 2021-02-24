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

class Program {
public:
    char language[20];
    char* getLanguage() { return this->language; }
    Program(char language[20])
    {
        cout << "执行 Program 构造方法" << endl;
        strcpy(this->language, language);
    }
    ~Program() { cout << "执行 Program 析构方法" << endl; }
};

class Coder : public Person,
              public Program {
public:
    Coder(char name[20], int age, char language[20])
        : Person(name, age), Program(language)
    {
        cout << "执行 Coder 构造方法" << endl;
    }
    ~Coder() { cout << "执行 Coder 析构方法" << endl; }
};

int main()
{
    char name[20] = "张三";
    char language[20] = "c++";
    Coder* c = new Coder(name, 18, language);
    cout << c->getName() << endl;
    cout << c->getAge() << endl;
    cout << c->getLanguage() << endl;
    delete c;
    return 0;
}
