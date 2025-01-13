#include<bits/stdc++.h>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void setDetails(string n, int a) {
        name = n;
        age = a;
    }

    void displayPersonInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int rollNumber;
    string course;

public:
    void setStudentDetails(int r, string c) {
        rollNumber = r;
        course = c;
    }

    void displayStudentInfo() {
        displayPersonInfo();
        cout << "Roll Number: " << rollNumber << ", Course: " << course << endl;
    }
};

int main() {
    Student student1;
    student1.setDetails("Prajwal", 22);
    student1.setStudentDetails(101, "Computer Science");
    student1.displayStudentInfo();

    return 0;
}
