/**
 * @file: class.cpp
 * @author: xxx
 * @mail: xxx@baidu.com
 * @date 2021-02-24 10:51:36
 * @brief
 **/
#include <string.h>

#include <iostream>
using namespace std;

class Person {
private:
    char name[20];
    int age;
    double score;

public:
    char* getName() { return this->name; }
    int getAge() { return this->age; }
    double getScore() { return this->score; }
    Person(char name[20], int age, double score)
    {
        cout << "执行构造函数" << endl;
        strcpy(this->name, name);
        this->age = age;
        this->score = score;
    }
    ~Person() { cout << "执行析构函数" << endl; }
};

int main()
{
    char name[20] = "张三";
    Person* p = new Person(name, 18, 98.5);
    cout << p->getName() << endl;
    cout << p->getAge() << endl;
    cout << p->getScore() << endl;
    delete p;
}
