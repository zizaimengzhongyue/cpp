#include <iostream>

using namespace std;

class Person {
public:
    virtual char* getGender(char* gender) = 0;
};

class Man : public Person {
public:
    char* getGender(char* gender)
    {
        strcpy(gender, "man");
        return gender;
    }
};

class Woman : public Person {
public:
    char* getGender(char* gender)
    {
        strcpy(gender, "woman");
        return gender;
    }
};

int main()
{
    char gender[100];

    Person* p = new Man();
    cout << p->getGender(gender) << endl;

    p = new Woman();
    cout << p->getGender(gender) << endl;
}
