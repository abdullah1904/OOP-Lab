#include <iostream>
using namespace std;
int main(){
    int* arr = new int[6];
    int* ptr = &arr[5];
    delete[] arr;
    cout<<*ptr<<endl;
    return 0;
}