#include "stdafx.h"
#include <iostream>
#include <string>
#include "WorkStore.h"
using std::cout;
using std::endl;

WorkStore::WorkStore() {
    mName = "Rabbit House";
}

WorkStore::WorkStore(string name) {
    mName = name;
}

void WorkStore::displayName() {
    cout << mName << endl;
}