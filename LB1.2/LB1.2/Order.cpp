#include "Order.h"
#include <iostream>
#include <string>

using namespace std;

void Order::init(int orderId, int ticketNumber, string bookTitle) {
    this->orderId = orderId;
    this->ticketNumber = ticketNumber;
    this->bookTitle = bookTitle;
    this->isActive = true;
}

void Order::printInfo() {
    cout << "�����: " << orderId << ", �����: " << ticketNumber
        << ", �����: " << bookTitle << ", �������: " << (isActive ? "��" : "���") << endl;
}

bool Order::checkActive() {
    return isActive;
}

void Order::updateBookTitle(string newTitle) {
    bookTitle = newTitle;
}