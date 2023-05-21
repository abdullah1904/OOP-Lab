#include <iostream>
#include <string>
using namespace std;
class person
{
private:
int age;
string name, fname, city;
public:
person(string = "Abdullah", string = "Zahid", int = 19, string = "lahore");
person(person&);
~person(){}
void get();
void print();
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
person :: person(string a, string b, int c, string d) {
    name = a;
    fname = b;
    age = c;
    city = d;
}
person :: person(person &per){
    name = per.name;
    fname = per.fname;
    age = per.age;
    city = per.city;
}
void person :: print(){
    cout<<"Name: "<<name<<endl;
    cout<<"Father Name: "<<fname<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"City: "<<city<<endl;
}
void person :: get(){
    cout<<"Enter Name: ";
    getline(cin>>ws,name);
    cout<<"Enter Father Name: ";
    getline(cin>>ws,fname);
    cout<<"Enter City Name: ";
    getline(cin>>ws,city);
    cout<<"Enter Age: ";
    cin>>age;
}