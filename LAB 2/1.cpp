#include <iostream>
using namespace std;

class Radio {
private:
    float frequency;
    int volume;

public:
    void setFrequency(float f) {
        frequency = f;
    }

    void setVolume(int v) {
        volume = v;
    }

    void displayStatus() {
        cout << "Frequency: " << frequency << " MHz" << endl;
        cout << "Volume: " << volume << endl;
    }
};

int main() {
    Radio r1, r2;

    r1.setFrequency(98.5);
    r1.setVolume(10);

    r2.setFrequency(102.3);
    r2.setVolume(15);

    cout << "Radio 1 Status:\n";
    r1.displayStatus();

    cout << "\nRadio 2 Status:\n";
    r2.displayStatus();

    return 0;
}
