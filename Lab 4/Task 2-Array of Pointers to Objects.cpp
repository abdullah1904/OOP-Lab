#include <iostream>
using namespace std;
class client{
public:
client(int = 00, string = "Ali");
~client();
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
                ptr[i][j].get(i+j,"Web Development");
            }
            else{
                ptr[i][j].get(i+j,"Machine Learning");
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
    ptr = NULL;
    return 0;
}
client :: client(int a , string b){
    clientNo = a;
    project = b;
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
client :: ~client(){
    cout<<"Object Destroyed Successfully"<<endl;
}