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

    // �N���X�̐錾�̒��Ŏ������Ă��C�����C���֐��ɂȂ�B(�C�����C���֐��̎����̓w�b�_�t�@�C���̒��ōs���B)
    void displayWorkerData() {
        cout << "name: " << getName() << ", age: " << getAge() << ", role: " << mRole << ", workstore: " << mWorkStore.getName() << endl;
    }
};

#endif