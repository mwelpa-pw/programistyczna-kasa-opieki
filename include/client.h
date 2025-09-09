#pragma once
#include <string>

class Client {
    private:
        static int clientId;
        std::string name;
        std::string surname;
        std::string address;
        std::string phoneNumber;
    public:
        Client(int clientId, std::string name, std::string surname, std::string address, std::string phoneNumber)
            : name(name), surname(surname), address(address), phoneNumber(phoneNumber) {
                clientId++;
            }
        int getClientId() const { return clientId; }
        std::string getName() const { return name; }
        std::string getSurname() const { return surname; }
        std::string getAddress() const { return address; }
        std::string getPhoneNumber() const { return phoneNumber; }
        void setAddress(const std::string& newAddress) { address = newAddress; }
        void setPhoneNumber(const std::string& newPhoneNumber) { phoneNumber = newPhoneNumber; }
        ~Client() {}
};