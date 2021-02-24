/**
* @file: inherit.cpp
* @author: xxx
* @mail: xxx@baidu.com
* @date 2021-02-24 13:49:25
* @brief
**/
#include<iostream>
using namespace std;

class Person {
private:
    char name[20];
    int age;

public:
    char* getName() { return this->name; }
    int getAge() { return this->age; }
    Person(char name[20], int age)
    {
        cout << "父类构造函数被调用" << endl;
        strcpy(this->name, name);
        this->age = age;
    }
    ~Person() { cout << "父类析构函数被调用" << endl; }
};

class Student : public Person {
private:
    double score;

public:
    double getScore() { return this->score; }
    Student(char name[20], int age, double score) : Person(name, age)
    {
        cout << "子类构造函数被调用" << endl;
        this->score = score;
    }
    ~Student() { cout << "子类析构函数被调用" << endl; }
};

int main()
{
    char name[20] = "张三";
    Student* s = new Student(name, 18, 98.5);
    cout << s->getName() << endl;
    cout << s->getAge() << endl;
    cout << s->getScore() << endl;
    delete s;
    return 0;
}
