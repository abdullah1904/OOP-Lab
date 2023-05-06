#include <iostream>
#include <string>
using namespace std;
struct student{
    string name;
    string fname;
    int age;
    int rollno;
};
void print(student);
int main(){
    student student;
    cout<<"Enter Your Name: ";
    getline(cin, student.name);
    cout<<"Enter Your Father Name: ";
    getline(cin, student.fname);
    cout<<"Enter Your Age: ";
    cin>>student.age;
    cout<<"Enter Your Roll Number: ";
    cin>>student.rollno;
    print(student);
    return 0;
}
void print(student candidate){
    cout<<"Student Name: "<<candidate.name<<endl;
    cout<<"Student Father Name: "<<candidate.fname<<endl;
    cout<<"Student Age: "<<candidate.age<<endl;
    cout<<"Student Roll Number: "<<candidate.rollno<<endl;
}