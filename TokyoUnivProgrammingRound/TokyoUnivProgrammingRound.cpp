// TokyoUnivProgrammingRound.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <map>
#include <stack>
#include <string>
#include "WorkStore.h"
#include "Person.h"
#include "Worker.h"
using namespace std;

int execStack();
void execMap();

int main()
{
    WorkStore rabbithouse("Rabbit house");
    rabbithouse.displayName();

    Person megu("Megu", 14);
    megu.displayPersonData();
    
    Worker cocoa("Cocoa", 16, "Waitress", rabbithouse);
    cocoa.displayWorkerData();
    
    getchar();
    return 0;
}

int execStack() {
    string word;
    stack<int> S;
    while (cin >> word) {
        int n1;
        int n2;
        if (word == "+") {
            if (S.size() < 1) return 0;
            n1 = S.top();
            S.pop();
            n2 = S.top();
            S.pop();
            S.push(n1 + n2);
        }
        else if (word == "-") {
            if (S.size() < 1) return 0;
            n1 = S.top();
            S.pop();
            n2 = S.top();
            S.pop();
            S.push(n1 - n2);
        }
        else if (word == "*") {
            if (S.size() < 1) return 0;
            n1 = S.top();
            S.pop();
            n2 = S.top();
            S.pop();
            S.push(n1 * n2);
        }
        else {
            S.push(stoi(word));
        }
        cout << S.top() << endl;
    }
    return 0;
}

void execMap() {
    map<string, int> phone;
    phone["syaro"] = 120;
    phone["rize"] = 10000;
    // C++11à»ëO
    //for (map<string, int>::iterator p = phone.begin(); p != phone.end(); p++) {
    // C++11à»ç~
    for (auto p = phone.begin(); p != phone.end(); p++) {
        cout << p->first << " " << p->second << endl;
    }
    getchar();
}