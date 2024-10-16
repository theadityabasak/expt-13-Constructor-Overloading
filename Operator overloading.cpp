//23070123007 Aditya Basak
//Aim:To Implement operator overloading in program.
#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:

    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

 
    Complex operator+(Complex const& obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }


    Complex operator-(Complex const& obj) {
        Complex res;
        res.real = real - obj.real;
        res.imag = imag - obj.imag;
        return res;
    }


    void print() {
        cout << real << " + i " << imag << '\n';
    }
};

int main() {
    Complex c1(10, 5), c2(2, 4), c3(20,3);


    Complex c4 = c1 + c2 + c3;
    cout << "Sum: ";
    c4.print();


    Complex c5 = c1 - c2 - c3;
    cout << "Difference: ";
    c5.print();

    return 0;
}
//Output
/*Sum: 32 + i 12
Difference: -12 + i -2*/