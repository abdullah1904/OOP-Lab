#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> array(5) ; 
    array = {130,425,463,901,947};
    cout<<" --: The Vector Before Operations :--"<<endl;
    for(int i=0;i<array.size();i++){
        cout<<array.at(i)<<" ";
    }
    cout<<endl<<"The first value of vector before operations is: "<<array.front()<<endl;
    cout<<"The last value of vector before operations is: "<<array.back()<<endl;
    cout<<"The size of vector before operations is: "<<array.size()<<endl;
    array.pop_back();
    array.pop_back();
    array.push_back(100);
    array.push_back(200);
    array.push_back(300);
    array.resize(25);
    cout<<" --: The Vector After Operations :--"<<endl;
    for(int i=0;i<array.size();i++){
        cout<<array.at(i)<<" ";
    }
    cout<<endl<<"The first value of vector after operations is: "<<array.front()<<endl;
    cout<<"The last value of vector after operations is: "<<array.back()<<endl;
    cout<<"The size of vector after operations is: "<<array.size()<<endl;
    return 0;
}