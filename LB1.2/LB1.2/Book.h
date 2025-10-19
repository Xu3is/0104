#pragma once
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int year;
    bool isAvailable;
public:
    void init(string title, string author, int year);
    void printInfo();
    bool checkAvailability();
    void updateYear(int newYear);
};