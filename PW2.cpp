#include <iostream>
#include <string>

using namespace std;

struct Bank_Account {
    string ownerName;
    string accountNumber;
    double balance;
};

void deposit(Bank_Account& account, double amount) {
    account.balance += amount;
    cout << "Deposit successful. Current balance: " << account.balance << endl;
}

void withdraw(Bank_Account& account, double amount) {
    if (amount > account.balance) {
        cout << "Insufficient funds. Withdrawal failed." << endl;
    }
    else {
        account.balance -= amount;
        cout << "Withdrawal successful. Current balance: " << account.balance << endl;
    }
}

void display_Balance(const Bank_Account& account) {
    cout << "Current balance for account " << account.accountNumber << ": " << account.balance << endl;
}

int main() {
    Bank_Account my_Account;

    cout << "Enter owner's name: ";
    getline(cin, my_Account.ownerName);
    cout << "Enter account number: ";
    getline(cin, my_Account.accountNumber);
    cout << "Enter initial balance: ";
    cin >> my_Account.balance;

    int choice;
    double amount;

    do {
        cout << "\nMenu:\n1. Deposit\n2. Withdraw\n3. Display Balance\n4. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            deposit(my_Account, amount);
            break;
        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            withdraw(my_Account, amount);
            break;
        case 3:
            display_Balance(my_Account);
            break;
        case 4:
            cout << "Exiting program.";
            break;
        default:
            cout << "Invalid choice. Please try again.";
        }
    } while (choice != 4);

    return 0;
}