#include <iostream>
using namespace std;

class Rupee {
private:
    long value;

public:
    Rupee(long v = 0) {
        value = v;
    }

    // + operator
    Rupee operator+(Rupee r) {
        return Rupee(value + r.value);
    }

    // == operator
    bool operator==(Rupee r) {
        return value == r.value;
    }

    // Friend << operator
    friend ostream& operator<<(ostream &out, Rupee r);
};

ostream& operator<<(ostream &out, Rupee r) {
    out << "Rs. " << r.value;
    return out;
}

int main() {
    Rupee r1(500), r2(300);

    Rupee r3 = r1 + r2;

    cout << r1 << " + " << r2 << " = " << r3 << endl;

    if (r1 == r2)
        cout << "Equal\n";
    else
        cout << "Not Equal\n";

    return 0;
}