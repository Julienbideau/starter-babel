#include <string>
using namespace std;

class Student {
    private:
        string name;
        int age;

    public:
        Student(string name, int age);
        string getName();
        int getAge();
        string toString();
};