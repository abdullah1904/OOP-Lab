#include <iostream>
using namespace std;
class client{
public:
client(){
    clientNo = 0;
    project = "";
}
void get(int,string);
void print();
private:
int clientNo;
string project;
};
int main(){
    client** ptr = new client*[5];
    for(int i=0 ; i<5;i++){
        ptr[i] = new client[3];
    }
    for(int i = 0; i<5;i++){
        for(int j =0; j<3;j++){
            if((i+j)%2==0){
                ptr[i][j].get(i,"Web Development");
            }
            else{
                ptr[i][j].get(i,"Machine Learning");
            }
        }
    }
    for(int i = 0; i<5;i++){
        for(int j =0; j<3;j++){
            ptr[i][j].print();
        }
    }
    for(int i =0;i<5;i++){
        delete[] ptr[i];
    }
    delete ptr;
    ptr =NULL;
    return 0;
}
void client :: print(){
    cout<<" --: Client Order :-- "<<endl<<endl; 
    cout<<"Client No: "<<clientNo<<endl;
    cout<<"Project Type: "<<project<<endl<<endl;
}
void client :: get (int a, string s){
    clientNo = a;
    project = s;
}