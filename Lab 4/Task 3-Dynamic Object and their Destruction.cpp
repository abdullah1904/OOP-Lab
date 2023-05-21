#include <iostream>
#include <string>
using namespace std;
class Student{
private:
int age, id;
string name,fname;
public:
Student(string = "Abdullah", string= "Zahid", int=19, int=525);
~Student();
void get();
void print();
};
int main(){
    Student *ptr = new Student[2];
    for(int i=0;i<2;i++){
        ptr[i].get();
        cout<<endl;
    }
    for(int i=0;i<2;i++){
        ptr[i].print();
        cout<<endl;
    }
    delete[] ptr;
    ptr = NULL;
    return 0;
}
Student :: Student(string a, string b, int c, int d){
    name = a;
    fname = b;
    age = c;
    id = d;
}
Student :: Student(string Name, string Fname, int Age, int Id){
    name = Name;
    fname = Fname;
    age = Age;
    id = Id;
}
void Student :: get(){
    cout<<" --: Enter Student Information :--"<<endl;
    cout<<"Enter Name: ";
    getline(cin>>ws,name);
    cout<<"Enter Father Name: ";
    getline(cin>>ws,fname);
    cout<<"Enter Age: ";
    cin>>age;
    cout<<"Enter Id Number: ";
    cin>>id;
}
void Student :: print(){
    cout<<" --: Student Information :--"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Father Name: "<<fname<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Id Number: "<<id<<endl;
}
Student :: ~Student(){
    cout<<"Object Destroyed Successfully";
}