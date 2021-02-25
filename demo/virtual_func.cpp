#include <iostream>

using namespace std;

class Person {
public:
    virtual char* getGender(char* gender)
    {
        strcpy(gender, "unknown");
        return gender;
    }
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
    Person* p = new Man();
    char gender[100];
    cout << p->getGender(gender) << endl;

    p = new Woman();
    cout << p->getGender(gender) << endl;
    return 0;
}
