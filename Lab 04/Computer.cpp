#include "Computer.h"

Processor::Processor(string m, double s) {
    model = m;
    speed = s;
}

RAM::RAM(int s, string t) {
    size = s;
    type = t;
}

Computer::Computer(string pModel, double pSpeed, int rSize, string rType)
    : processor(pModel, pSpeed), ram(rSize, rType) {}

void Computer::displaySpecs() {
    cout << "Processor: " << processor.model << " @ " << processor.speed << " GHz\n";
    cout << "RAM: " << ram.size << "GB " << ram.type << endl;
}
