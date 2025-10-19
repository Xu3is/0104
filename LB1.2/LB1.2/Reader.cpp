#include "Reader.h"
#include <iostream>
#include <string>

using namespace std;

void Reader::init(string name, int ticketNumber, string regDate) {
    this->name = name;
    this->ticketNumber = ticketNumber;
    this->regDate = regDate;
    this->isActive = true;
}

void Reader::printInfo() {
    cout << "Читатель: " << name << ", Билет: " << ticketNumber
        << ", Дата регистрации: " << regDate << ", Статус: " << (isActive ? "Активен" : "Неактивен") << endl;
}

bool Reader::checkStatus() {
    return isActive;
}

void Reader::updateRegDate(string newDate) {
    regDate = newDate;
}