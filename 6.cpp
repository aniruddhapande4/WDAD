#include<bits/stdc++.h>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

protected:
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

public:
    void showInfo() {
        displayInfo();
    }
};

int main() {
    Person person1;
    person1.setName("Prajwal");
    person1.setAge(22);
    cout << "Person's Name: " << person1.getName() << endl;
    cout << "Person's Age: " << person1.getAge() << endl;
    person1.showInfo();
    return 0;
}
