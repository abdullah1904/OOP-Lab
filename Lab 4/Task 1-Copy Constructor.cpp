#include <iostream>
#include <string>
using namespace std;
class person
{
private:
int age;
string name, fname, city;
public:
person(): name(""), fname(""),age(00),city(""){}
~person(){}
person(person &per){
    name = per.name;
    fname = per.fname;
    age = per.age;
    city = per.city;
}
void get(){
    cout<<"Enter Name: ";
    getline(cin,name);
    cout<<"Enter Father Name: ";
    getline(cin,fname);
    cout<<"Enter City Name: ";
    getline(cin,city);
    cout<<"Enter Age: ";
    cin>>age;
}
void print(){
    cout<<"Name: "<<name<<endl;
    cout<<"Father Name: "<<fname<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"City: "<<city<<endl;
}
};
int main()
{
    person Abdullah;
    Abdullah.get();
    person abdullah(Abdullah);
    Abdullah.print();
    abdullah.print();
    return 0;
}