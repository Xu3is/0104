#pragma once
#include <string>

using namespace std;

class Order {
private:
    int orderId;
    int ticketNumber;
    string bookTitle;
    bool isActive;
public:
    void init(int orderId, int ticketNumber, string bookTitle);
    void printInfo();
    bool checkActive();
    void updateBookTitle(string newTitle);
};