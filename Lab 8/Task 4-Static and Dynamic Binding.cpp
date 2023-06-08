#include <iostream>
using namespace std;
class employee{
private:
    string name;
    int id;
public:
    employee(string="Abdullah", int=525);
    virtual void showData();
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
    manager* list[3] = {
        new manager("Abdullah", "CEO"),
        new manager("Zahid"),
        new manager("Abdullah", "Superident", 499, 1000)
    };
    for(int i =0; i<3;i++){
        list[i]->showData();
    }
    for(int i =0; i<3;i++){
        delete list[i];
    }
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