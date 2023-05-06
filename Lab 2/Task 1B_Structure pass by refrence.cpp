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
void change(student &);
int main(){
    student student = {"Abdullah", "Zahid" , 00, 00};
    print(student);
    change(student);
    print(student);
    return 0;
}
void change(student &candidate){
    cout<<" --: Change Information :--"<<endl;
    cout<<"Enter New Name: ";
    getline(cin,candidate.name);
    cout<<"Enter New Father Name: ";
    getline(cin, candidate.fname);
    cout<<"Enter New Age: ";
    cin>>candidate.age;
    cout<<"Enter New Roll Number: ";
    cin>>candidate.rollno;
}
void print(student candidate){
    cout<<"Student Name: "<<candidate.name<<endl;
    cout<<"Student Father Name: "<<candidate.fname<<endl;
    cout<<"Student Age: "<<candidate.age<<endl;
    cout<<"Student Roll Number: "<<candidate.rollno<<endl;
}