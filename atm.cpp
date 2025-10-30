#include <iostream>
using namespace std;

int main() {
    double balance, withdrawal;

    cout << "Enter current balance: ";
    cin >> balance;

    cout << "Enter withdrawal amount: ";
    cin >> withdrawal;

    if (withdrawal <= 0) {
        cout << "Invalid withdrawal amount." << endl;
    } 
    else if (withdrawal > balance) {
        cout << "Insufficient balance. Transaction not possible." << endl;
    } 
    else {
        balance -= withdrawal;
        cout << "Transaction successful!" << endl;
        cout << "Remaining balance: " << balance << endl;
    }

    return 0;
}
