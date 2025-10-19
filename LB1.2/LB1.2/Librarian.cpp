#include "Librarian.h"
#include <iostream>
#include <string>

using namespace std;

void Librarian::init(string name, int employeeId, int yearsOfService) {
    this->name = name;
    this->employeeId = employeeId;
    this->yearsOfService = yearsOfService;
}

void Librarian::printInfo() {
    cout << "������������: " << name << ", ID: " << employeeId
        << ", ����: " << yearsOfService << " ���" << endl;
}

bool Librarian::isWorking() {
    return yearsOfService > 0;
}

void Librarian::increaseYearsOfService() {
    yearsOfService++;
}