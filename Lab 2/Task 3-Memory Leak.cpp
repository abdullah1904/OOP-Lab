#include <iostream>
using namespace std;
int main(){
    int* ptr = new int;
    *ptr = 10;
    ptr = new int;
    *ptr = 20;
    cout<<*ptr;
    delete ptr;
    return 0;
}