#include <iostream>
using namespace std;

int main() {
    // question 1 :
    int num1, num2;
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;

    if (num2 != 0) {
        cout << "Division: " << static_cast<double>(num1) / num2 << endl;
        cout << "Modulus: " << num1 % num2 << endl;
    } else {
        cout << "Division: Undefined (division by zero)" << endl;
        cout << "Modulus: Undefined (division by zero)" << endl;
    }
    return 0;
}
// question 2:
#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Overload + operator
    Complex operator + (const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overload - operator
    Complex operator - (const Complex& other) {
        return Complex(real - other.real, imag - other.imag);
    }

    // Display function
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);

    cout << "Complex Number 1: ";
    c1.display();
    cout << "Complex Number 2: ";
    c2.display();

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;

    cout << "Sum: ";
    sum.display();
    cout << "Difference: ";
    diff.display();

    return 0;
}
