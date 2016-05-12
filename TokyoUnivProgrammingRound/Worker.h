#pragma once
#ifndef __WORKER__H_INCLUDED__
#define __WORKER__H_INCLUDED__

#include <iostream>
#include <string>
#include "Person.h"
#include "WorkStore.h"
using namespace std;

class Worker : public Person {
private:
    string mRole;
    WorkStore mWorkStore;
public:
    Worker() : Person() {};
    
    Worker(string name, int age, string role, WorkStore workStore) : Person(name, age) {
        mRole = role;
        mWorkStore = workStore;
    }

    // クラスの宣言の中で実装してもインライン関数になる。(インライン関数の実装はヘッダファイルの中で行う。)
    void displayWorkerData() {
        cout << "name: " << getName() << ", age: " << getAge() << ", role: " << mRole << ", workstore: " << mWorkStore.getName() << endl;
    }
};

#endif