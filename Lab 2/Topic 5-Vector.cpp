#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> array(5);
    array[0] = 10;
    array[1] = 20;
    array[2] = 30;
    array[3] = 40;
    array[4] = 50;
    cout << "The Original Array" << endl;
    for (int i = 0; i < array.size(); i++) {
        cout << array[i] << endl;
    }
    array.pop_back();
    array.push_back(69);
    cout << "The array after operations"<<endl;
    for(int i =0 ; i<array.size(); i++){
        cout<<array[i]<<endl;
    }
    return 0;
}