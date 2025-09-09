#include <string>
#pragma once

struct Type {
    std::string name;
    int interestRate;
} typedef Type;

enum Currency {
    PLN,
    USD,
    EUR
};

class Account {
    private:
        static int id;
        static int accountNumber;
        int clientId;
        int balance;
        Currency currency;
        Type type;
    public:
        Account(int clientId, int balance, int accountNumber, Type type, Currency currency = PLN)
            : clientId(clientId), balance(0), type(type), currency(currency=PLN) {
                id++;
                accountNumber++;
            }

        int getId() const { return id; }
        int getClientId() const { return clientId; }
        int getBalance() const { return balance; }
        Currency getCurrency() const { return currency; }
        Type getType() const { return type; }
        int getAccountNumber() const { return accountNumber; }
        
        void deposit(int amount) { balance += amount; }

        bool withdraw(int amount) {
            if (amount > balance) {
                return false;
            } else {
                balance -= amount;
                return true;
            }
        }

        virtual ~Account() {}
        virtual int ApplyInterest() {}
};