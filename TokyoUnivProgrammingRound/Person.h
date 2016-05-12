#pragma once
#ifndef __PERSON__H_INCLUDED__
#define __PERSON__H_INCLUDED__

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string mName;
    int mAge;
public:
    Person();
    Person(string name, int age) {
        mName = name;
        mAge = age;
    }

    string getName() {
        return mName;
    }
    
    int getAge() {
        return mAge;
    }
    
    // クラスの宣言の中で実装してもインライン関数になる。(インライン関数の実装はヘッダファイルの中で行う。)
    void displayPersonData() {
        cout << "name: " << mName << ", age: " << mAge << endl;
    }
};

#endif