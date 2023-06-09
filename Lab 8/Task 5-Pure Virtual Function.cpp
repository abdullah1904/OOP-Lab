#include <iostream>
using namespace std;
class base{
public:
    virtual void display()=0;
    void print(){
        cout<<"Base Class"<<endl;
    }
};
class derived1: public base{
public:
    void print(){
        cout<<"Derived Class 1"<<endl;
    }
};
class derived2: public base{
public:
    void print(){
        cout<<"Derived Class 2"<<endl;
    }
};
int main(){
    base *ptr;
    derived1 d1;
    derived2 d2;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n%2==0){
        ptr=&d1;
        ptr->print();
    }
    else{
        ptr = &d2;
        ptr->print();
    }
    return 0;
}