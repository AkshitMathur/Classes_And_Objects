//23070123014 Akshit Mathur
//Aim:Implemention of Classes and Objects to print the Student Details.

#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    string branch;
    float result;
    string year;
   
};
int main() {
    Student student1;
    student1.name="Akshit";
    student1.age=18;
    student1.branch="ENTC";
    student1.result=8.00;
    student1.year="Second";
   
    Student student2;
    student2.name="Ayush";
    student2.age=18;
    student2.branch="ENTC";
    student2.result=9.50;
    student2.year="Second";
    
    Student student3;
    student3.name="Alankar";
    student3.age=18;
    student3.branch="ENTC";
    student3.result=9.00;
    student3.year="Second";
    
    cout<<"Student1 details: "<<endl;
    cout<<"Name: "<<student1.name<<endl;
    cout<<"Branch: "<<student1.branch<<endl;
    cout<<"Year: "<<student1.year<<endl;
    cout<<"Result: "<<student1.result<<endl<<endl;
    
    cout<<"Student2 details: "<<endl;
    cout<<"Name: "<<student2.name<<endl;
    cout<<"Branch: "<<student2.branch<<endl;
    cout<<"Year: "<<student2.year<<endl;
    cout<<"Result: "<<student2.result<<endl<<endl;
    
    cout<<"Student3 details: "<<endl;
    cout<<"Name: "<<student3.name<<endl;
    cout<<"Branch: "<<student3.branch<<endl;
    cout<<"Year: "<<student3.year<<endl;
    cout<<"Result: "<<student3.result<<endl<<endl;
    
    return 0;
}
//output
/*Student1 details:
Name: Akshit
Branch: ENTC
Year: Second
Result: 8

Student2 details:
Name: Ayush
Branch: ENTC
Year: Second
Result: 9.5

Student3 details:
Name: Alankar
Branch: ENTC
Year: Second
Result: 9
*/

