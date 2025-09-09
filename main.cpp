#include <iostream>
#include "account.h"
#include "client.h"

int main() {
    Type savings = {"Savings", 1};
    Account acc(1, 100, 5000, savings);
    
    std::cout << "Account ID: " << acc.getId() << std::endl;
    std::cout << "Balance: " << acc.getBalance() << std::endl;
    acc.deposit(500);
    std::cout << "New Balance after deposit: " << acc.getBalance() << std::endl;
    if (acc.withdraw(200)) {
        std::cout << "Withdrawal successful. New Balance: " << acc.getBalance() << std::endl;
    } else {
        std::cout << "Insufficient funds for withdrawal." << std::endl;   
    }

    return 0;
}