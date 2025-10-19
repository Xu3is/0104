#include "Book.h"
#include <iostream>
#include <string>

using namespace std;

void Book::init(string title, string author, int year) {
    this->title = title;
    this->author = author;
    this->year = year;
    this->isAvailable = true;
}

void Book::printInfo() {
    cout << "Книга: " << title << ", Автор: " << author << ", Год: " << year
        << ", Доступна: " << (isAvailable ? "Да" : "Нет") << endl;
}

bool Book::checkAvailability() {
    return isAvailable;
}

void Book::updateYear(int newYear) {
    year = newYear;
}