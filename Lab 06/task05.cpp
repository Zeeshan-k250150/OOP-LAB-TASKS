#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void startEngine() {
        cout << "Vehicle engine starting...\n";
    }

    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    void startEngine() override {
        cout << "Car engine starts with key ignition\n";
    }
};

class Bike : public Vehicle {
public:
    void startEngine() override {
        cout << "Bike starts with kick or self-start\n";
    }
};

class Truck : public Vehicle {
public:
    void startEngine() override {
        cout << "Truck engine starts with heavy ignition system\n";
    }
};

int main() {
    Vehicle* v;

    Car c;
    Bike b;
    Truck t;

    v = &c;
    v->startEngine();

    v = &b;
    v->startEngine();

    v = &t;
    v->startEngine();

    return 0;
}