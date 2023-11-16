#include <iostream>
#include <cmath>
using namespace std;

struct nrComplex {
    float a; 
    float b; 
};


float absoluteValue(float x) {
    return abs(x);
}


float absoluteValue(nrComplex complexNumber) {
    return sqrt(complexNumber.a * complexNumber.a + complexNumber.b * complexNumber.b);
}

int main() {
    
    float realNumber = -5.8;
    nrComplex complexNumber = { 3.0, 4.0 };

    
    cout << "Absolute value of real number: " << absoluteValue(realNumber) << endl;

    
    cout << "Absolute value of complex number: " << absoluteValue(complexNumber) <<endl;

    return 0;
}
