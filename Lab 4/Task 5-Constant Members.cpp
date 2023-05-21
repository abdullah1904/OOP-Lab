#include <iostream>
#include <string>
using namespace std;
class user
{
private:
    int age,balance;
    string name, fname,city;
public:
    user(string = "Abdullah", string = "Zahid", int = 19, int = 1000, string = "Lahore");
    void getInfo();
    int getAmount() const;
    void deposit(int);
    void debit(int);
    void print() const;
};
int main()
{
    user Abdullah;
    Abdullah.getInfo();
    Abdullah.print();
    Abdullah.deposit(500);
    Abdullah.debit(200);
    Abdullah.print();
    const user Ali("Ali","Ahamd", 20);
    Ali.getAmount();
    Ali.print();
    return 0;
}
user :: user(string a, string b, int c, int d, string e){
    name = a;
    fname = b;
    age = c;
    balance = d;
    city = e;
}
void user :: getInfo(){
    cout<<"Enter Name: ";
    getline(cin>>ws,name);
    cout<<"Enter Father Name: ";
    getline(cin>>ws,fname);
    cout<<"Enter Age: ";
    cin>>age;
    cout<<"Enter Balance: ";
    cin>>balance;
    cout<<"Enter City Name: ";
    getline(cin>>ws,city);
}
int user :: getAmount() const{
    return balance;
}
void user :: deposit(int value){
    balance += value;
}
void user :: debit(int value){
    balance -= value;
}
void user :: print() const{
    cout<<endl<<" --: User Information :-- "<<endl;
    cout<<"Name:        "<<name<<endl;
    cout<<"Father Name: "<<fname<<endl;
    cout<<"Age:         "<<age<<endl;
    cout<<"Balance:     "<<balance<<endl;
    cout<<"City:        "<<city<<endl; 
}