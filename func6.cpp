#include <iostream>
using namespace std;

// Function with default argument
int add(int a, int b = 10) {
    return a + b;
}

int main() {
    // Calling with one argument (b takes default value 10)
    cout << "Sum (one argument): " << add(5) << endl;

    // Calling with two arguments
    cout << "Sum (two arguments): " << add(5, 20) << endl;

    return 0;
}