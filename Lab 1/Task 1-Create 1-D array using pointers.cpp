#include <iostream>
using namespace std;
int main(){
    int length;
    cout<<"Enter the length of Array: ";
    cin>>length;
    int* ptr = new int[length];
    cout<<"  --: Enter Array Elements :--  "<<endl;
    for(int i =0; i<length;i++){
        cout<<"Enter the "<<i+1<<" element of array: ";
        cin>>*(ptr+i);
    }
    cout<<" --: The Array Elements :-- "<<endl;
    for(int i =0; i<length ; i++){
        cout<<"The "<<i+1<<" elements of array is "<<*(ptr+i)<<endl;
    }
    delete[] ptr;
    return 0;
}