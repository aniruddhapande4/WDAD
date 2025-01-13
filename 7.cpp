#include<bits/stdc++.h>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person() {
        name = "Unknown";
        age = 0;
    }

    Person(string n) {
        name = n;
        age = 0;
    }

    Person(string n, int a) {
        name = n;
        age = a;
    }

    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person person1;
    person1.displayInfo();

    Person person2("Prajwal");
    person2.displayInfo();

    Person person3("Prajwal", 22);
    person3.displayInfo();

    return 0;
}
