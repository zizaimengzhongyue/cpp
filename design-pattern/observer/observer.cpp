#include <iostream>
#include <vector>

using namespace std;

class Platform {
public:
    virtual void changePrice(double price) = 0;
};

class Subject {
public:
    Subject(double price) { this->price = price; }
    ~Subject() {}
    void addPlatform(Platform* p)
    {
        this->platforms.push_back(p);
        p->changePrice(this->price);
    }
    void changePrice(double price)
    {
        this->price = price;
        notifyPlatforms();
    }
    void notifyPlatforms()
    {
        for (int i = 0; i < this->platforms.size(); i++) {
            this->platforms[i]->changePrice(this->price);
        }
    }

private:
    vector<Platform*> platforms;
    double price;
};

class Client : Platform {
public:
    void changePrice(double price) { this->price = price; }
    double getPrice() { return this->price; }

private:
    double price;
};

class Brownser : Platform {
public:
    void changePrice(double price) { this->price = price; }
    double getPrice() { return this->price; }

private:
    double price;
};

int main()
{
    Subject* s = new Subject(100.00);
    Client* c = new Client();
    s->addPlatform((Platform*)c);
    Brownser* b = new Brownser();
    s->addPlatform((Platform*)b);
    cout << c->getPrice() << endl;
    cout << b->getPrice() << endl;

    s->changePrice(200.00);
    cout << c->getPrice() << endl;
    cout << b->getPrice() << endl;
    return 0;
}
