#pragma once
#include <string>

using namespace std;

class Catalog {
private:
    int catalogId;
    int recordCount;
    string catalogType;
public:
    void init(int catalogId, int recordCount, string catalogType);
    void printInfo();
    void addRecord();
    void removeRecord();
};