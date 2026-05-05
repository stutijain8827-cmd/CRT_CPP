#include <iostream>
using namespace std;

// Function using reference
void applyDiscount(float &bill) {
    bill = bill - (0.10 * bill);  // apply 10% discount
}

int main() {
    float bill;

    cout << "Enter total bill amount: ";
    cin >> bill;

    applyDiscount(bill);  // passing by reference (original value will change)

    cout << "Updated bill after 10% discount: " << bill << endl;

    return 0;
}