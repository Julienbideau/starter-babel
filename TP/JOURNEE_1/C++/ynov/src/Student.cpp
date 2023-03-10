#include "Student.h"
#include <string>
using namespace std;

Student::Student(string name, int age) {
    this->name = name;
    this->age = age;
}

string Student::getName() {
    return name;
}

int Student::getAge() {
    return age;
}

string Student::toString() {
    return "Student:name=" + name + "," + "age=" + to_string(age);
}