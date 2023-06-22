#include <iostream>
#include <string>
using namespace std;
class employee{
private:
    string name;
    int id;
public:
    employee(string="Abdullah", int=525);
    void showData();
    ~employee(){
        cout<<"Base Object Destroyed"<<endl;
    }
};
class manager : public employee{
private:
    string title;
    int golfDues;
public:
    manager(string="Abdullah",string="Boss",int=525, int=100);
    void showData();
    ~manager(){
        cout<<"Derived Object Destroyed"<<endl;
    }
};
int main(){
    employee Abdullah;
    manager Zahid("Zahid", "Head", 01);
    Abdullah.showData();
    Zahid.showData();
    return 0;
}
employee::employee(string n, int ID){
    cout << "Base Class" << endl;
    name=n;
    id=ID;
}
void employee::showData(){
    cout<<"Name:        "<<name<<endl;
    cout<<"Id:          "<<id<<endl;
}
manager :: manager(string n,string t,int i, int d): employee(n,i){
    cout << "Derived Class" << endl;
    title=t;
    golfDues=d;
}
void manager :: showData(){
    employee::showData();
    cout<<"Title:       "<<title<<endl;
    cout<<"Golf Dues:   "<<golfDues<<endl;
}