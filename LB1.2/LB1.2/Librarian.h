#pragma once
#include <string>

using namespace std;

class Librarian {
private:
    string name;
    int employeeId;
    int yearsOfService;
public:
    void init(string name, int employeeId, int yearsOfService);
    void printInfo();
    bool isWorking();
    void increaseYearsOfService();
};