#include <iostream>
#include <string>
using namespace std;
class Student{
private:
int age, id;
string name,fname;
public:
void get(){
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
void print(){
    cout<<" --: Student Information :--"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Father Name: "<<fname<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Id Number: "<<id<<endl;
}
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