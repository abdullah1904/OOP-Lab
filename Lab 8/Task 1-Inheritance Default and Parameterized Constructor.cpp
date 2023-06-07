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
};
class manager : public employee{
private:
    string title;
    int golfDues;
public:
    manager(string="Abdullah",string="Boss",int=525, int=100);
    void showData();
};
int main(){
    employee Abdullah;
    manager Zahid("Zahid", "Head", 01);
    Abdullah.showData();
    Zahid.showData();
    return 0;
}
employee::employee(string n, int ID){
    name=n;
    id=ID;
}
void employee::showData(){
    cout<<"Name:        "<<name<<endl;
    cout<<"Id:          "<<id<<endl;
}
manager :: manager(string n,string t,int i, int d): employee(n,i){
    title=t;
    golfDues=d;
}
void manager :: showData(){
    employee::showData();
    cout<<"Title:       "<<title<<endl;
    cout<<"Golf Dues:   "<<golfDues<<endl;
}