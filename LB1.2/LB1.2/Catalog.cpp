#include "Catalog.h"
#include <iostream>
#include <string>

using namespace std;

void Catalog::init(int catalogId, int recordCount, string catalogType) {
    this->catalogId = catalogId;
    this->recordCount = recordCount;
    this->catalogType = catalogType;
}

void Catalog::printInfo() {
    cout << "Каталог: " << catalogId << ", Записей: " << recordCount
        << ", Тип: " << catalogType << endl;
}

void Catalog::addRecord() {
    recordCount++;
}

void Catalog::removeRecord() {
    if (recordCount > 0) recordCount--;
}