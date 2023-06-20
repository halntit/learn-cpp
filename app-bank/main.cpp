#include <iostream> // standard input/output stream
#include <iomanip> // manipulate output

void showBalance(double balance) {
    std::cout << "Balance: $" << std::setprecision(2) << std::fixed << balance << std::endl;
}

double deposit(double balance, double amount) {
    return balance + amount;
}

double withdraw(double balance, double amount) {
    if (balance < amount) {
        std::cout << "Insufficient funds" << std::endl;
        return balance;
    }
    return balance - amount;
}

void app() {
    double balance = 100;
    int choice = 0;
    double amount;

    do {
        std::cout << "Enter your choice\n";
        std::cout << "1. Deposit\n2. Withdraw\n3. Show balance\n4. Exit\n";
        std::cin >> choice;

        std::cin.clear(); // reset input buffer to allow new input
        fflush(stdin); // flush input buffer

        switch (choice) { 
            case 1:
                std::cout << "Enter amount to deposit: ";
                std::cin >> amount;
                balance = deposit(balance, amount);
                break;
            case 2:
                std::cout << "Enter amount to withdraw: ";
                std::cin >> amount;
                balance = withdraw(balance, amount);
                break;
            case 3:
                showBalance(balance);
                break;
            case 4:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice\n";
        }
        std::cout << "================" << std::endl;
    } while (choice != 4);
}

int main() {
    app();

    return 0;
}