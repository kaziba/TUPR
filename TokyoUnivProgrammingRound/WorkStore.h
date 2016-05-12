#pragma once
#ifndef __WORKSTORE_H_INCLUDED__
#define __WORKSTORE_H_INCLUDED__

#include <string>
using std::string;
using std::cout;
using std::endl;

class WorkStore {
private:
    string mName;
public:
    WorkStore();
    WorkStore(string name);
    string getName() {
        return mName;
    }
    void displayName();
};

#endif