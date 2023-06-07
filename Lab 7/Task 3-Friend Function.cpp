#include <iostream>
using namespace std;
class Person{
friend void display(const Person&);
private:
    string name, fname, city;
    int age,salary;
public:
    Person(string="Abdullah", string="Zahid", string="Lahore", int=18, int=00);
};
int main(){
    Person p;
    display(p);
    return 0;
}
Person::Person(string n, string fn, string ct, int ag, int sl){
    this->name = n;
    this->fname = fn;
    this->city = ct;
    this->age = ag;
    this->salary = sl;
}
void display(const Person& per){
    cout<<"Person Name: "<<per.name<<endl;
    cout<<"Person Father Name: "<<per.fname<<endl;
    cout<<"Person City: "<<per.city<<endl;
    cout<<"Person Age: "<<per.age<<endl;
    cout<<"Person Salary: "<<per.salary<<endl;
}