#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string mName;
public:
    Person();
    Person(string name);
    void getName();
    void displayName();
};

Person::Person() {
    mName = "Cocoa";
}


Person::Person(string name) {
    mName = name;
}

Person::displayName() {
    cout << mName << endl;
}

