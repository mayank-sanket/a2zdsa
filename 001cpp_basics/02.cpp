#include <iostream>
#include <iomanip> // for std::setprecision

using namespace std;

int main() {
    // Integer types
    int x = 42; // Regular integer
    long y = 123456789L; // Long integer
    long long z = 9223372036854775807LL; // Long long integer (largest)

    cout << "int: " << x << endl;
    cout << "long: " << y << endl;
    cout << "long long: " << z << endl;

    // Floating-point types
    float a = 3.14159f; // Single-precision floating-point
    double b = 2.718281828459045; // Double-precision floating-point
    long double c = 1.618033988749894L; // Extended-precision floating-point

    cout << "fixed " <<fixed << setprecision(10); // Set precision for floating-point output
    cout << "float: " << a << endl;
    cout << "double: " << b << endl;
    cout << "long double: " << c << endl;

    return 0;
}