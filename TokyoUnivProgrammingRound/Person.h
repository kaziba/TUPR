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
    
    // �N���X�̐錾�̒��Ŏ������Ă��C�����C���֐��ɂȂ�B(�C�����C���֐��̎����̓w�b�_�t�@�C���̒��ōs���B)
    void displayPersonData() {
        cout << "name: " << mName << ", age: " << mAge << endl;
    }
};

#endif