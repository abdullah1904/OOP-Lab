#include <iostream>
using namespace std;
class base{
public:
    virtual void show(){
        cout<<"The Base Class Show Function"<<endl;
    }
};
class derived1 : public base{
public:
    void show(){
        cout<<"The Derived 1 Class Show Function"<<endl;
    }
};
class derived2 : public base{
public:
    void show(){
        cout<<"The Derived 2 Class Show Function"<<endl;
    }
};
int main(){
    derived1 d1;
    derived2 d2;
    base* ptr;
    ptr = &d1;
    ptr->show();
    ptr = &d2;
    ptr->show();
    return 0;
}
