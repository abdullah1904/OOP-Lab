#include <iostream>
using namespace std;
struct Person{
    string name;
    int age;
    double height;
    string origin;
};
int main(){
    Person person1;
    cout<<"Enter the name of person: ";
    cin>>person1.name;
    cout<<"Enter the age of person: ";
    cin>>person1.age;
    cout<<"Enter the height of person: ";
    cin>>person1.height;
    cout<<"Enter the origin of person: ";
    cin>>person1.origin;
    cout<<"The name of person is: "<<person1.name<<endl;
    cout<<"The age of person is: "<<person1.age<<endl;
    cout<<"The height of person is: "<<person1.height<<endl;
    cout<<"The origin of person is: "<<person1.origin<<endl;
    return 0;
}