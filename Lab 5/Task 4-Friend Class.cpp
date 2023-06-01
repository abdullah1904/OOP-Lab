#include <iostream>
#include <string>
using namespace std;
class Employee{
private:
    string name, fname, city;
    int age, salary;
public:
    Employee(string="Abdullah",string="Zahid",string="Lahore",int=11,int=10000);
    void set();
    friend class Display;
};
class Display{
public:
    void display(Employee& ep){
        cout<<"Name:        "<<ep.name<<endl;
        cout<<"Father Name: "<<ep.fname<<endl;
        cout<<"City:        "<<ep.city<<endl;
        cout<<"Age:         "<<ep.age<<endl;
        cout<<"Salary:      "<<ep.salary<<endl;
    }
};
int main(){
    Employee Abdullah;
    Display print;
    print.display(Abdullah);
    return 0;
}
Employee:: Employee(string n, string fn, string ct, int ag, int sl){
    this->name = n;
    this->fname = fn;
    this->city = ct;
    this->age = ag;
    this->salary = sl;
}
void Employee :: set(){
    cout<<"Enter Name: ";
    getline(cin>>ws,this->name);
    cout<<"Enter Father Name: ";
    getline(cin>>ws,this->fname);
    cout<<"Enter City: ";
    getline(cin>>ws,this->city);
    cout<<"Enter Age: ";
    cin>>this->age;
    cout<<"Enter Salary: ";
    cin>>this->salary;
}