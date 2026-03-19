#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>
using namespace std;

class Processor {
public:
    string model;
    double speed;

    Processor(string m = "", double s = 0);
};

class RAM {
public:
    int size;
    string type;

    RAM(int s = 0, string t = "");
};

class Computer {
private:
    Processor processor;
    RAM ram;

public:
    Computer(string pModel, double pSpeed, int rSize, string rType);
    void displaySpecs();
};
#endif
