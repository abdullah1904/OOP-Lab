#include <iostream>
using namespace std;
class resident
{
private:
    static int age;
public:
    resident();
    int display();
};
int resident :: age = 0;
int main()
{
    resident r1;
    cout<<"Employee Age of Resident 1: "<<r1.display()<<endl;
    resident r2;
    cout<<"Employee Age of Resident 2: "<<r2.display()<<endl;
    resident r3;
    cout<<"Employee Age of Resident 3: "<<r3.display()<<endl;
    return 0;
}
resident :: resident(){
    age++;
}
int resident :: display(){
    return age;
}