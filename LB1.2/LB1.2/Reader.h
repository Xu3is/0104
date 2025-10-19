#pragma once
#include <string>

using namespace std;

class Reader {
private:
    string name;
    int ticketNumber;
    string regDate;
    bool isActive;
public:
    void init(string name, int ticketNumber, string regDate);
    void printInfo();
    bool checkStatus();
    void updateRegDate(string newDate);
};