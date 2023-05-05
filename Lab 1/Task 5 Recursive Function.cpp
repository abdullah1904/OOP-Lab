#include <iostream>
using namespace std;
void reverseArray(int [], int,int);
int main(){
    int size = 5;
    int arr[5] = {1,2,3,4,5};
    for(int i=0; i<size;i++){
        cout << arr[i] << "\t";
    }
    cout<<endl;
    reverseArray(arr, 0, size-1);
    for(int i=0; i<size;i++){
        cout << arr[i] << "\t";
    }
    return 0;
}
void reverseArray(int array[], int start, int end){
    if(start >= end){
        return;
    }
    int temp = array[start];
    array[start] = array[end];
    array[end] = temp;
    reverseArray(array, start+1, end-1);
}