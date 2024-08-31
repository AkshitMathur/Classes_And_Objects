//23070123014 Akshit Mathur
//Aim:Implemention of Classes and Objects to Define Method outside Classes.
#include <iostream>
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    string branch;
    float result;
    string year;

    void printYear() ;
};

void Student::printYear() {
    cout << "I am studying in " << year << " year" << endl;
}

int main() {
    Student student1;
    student1.name = "Akshit";
    student1.age = 18;
    student1.branch = "ENTC";
    student1.result = 8.00;
    student1.year = "Second";

    Student student2;
    student2.name = "Ayush";
    student2.age = 18;
    student2.branch = "ENTC";
    student2.result = 9.50;
    student2.year = "Second";
    
    Student student3;
    student3.name = "Alankar";
    student3.age = 18;
    student3.branch = "ENTC";
    student3.result = 9.00;
    student3.year = "Second";
    
    cout << "Student1 details: " << endl;
    cout << "Name: " << student1.name << endl;
    cout << "Branch: " << student1.branch << endl;
    cout << "Result: " << student1.result << endl;
    student1.printYear();
    cout << endl;
    
    cout << "Student2 details: " << endl;
    cout << "Name: " << student2.name << endl;
    cout << "Branch: " << student2.branch << endl;
    cout << "Result: " << student2.result << endl;
    student2.printYear();
    cout << endl;
    
    cout << "Student3 details: " << endl;
    cout << "Name: " << student3.name << endl;
    cout << "Branch: " << student3.branch << endl;
    cout << "Result: " << student3.result << endl;
    student3.printYear(); 
    cout << endl;

    return 0;
}
//output
/*Student1 details:
Name: Akshit
Branch: ENTC
Result: 8
I am studying in Second year

Student2 details:
Name: Ayush
Branch: ENTC
Result: 9.5
I am studying in Second year

Student3 details:
Name: Alankar
Branch: ENTC
Result: 9
I am studying in Second year
*/
