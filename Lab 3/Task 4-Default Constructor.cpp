#include <iostream>
using namespace std;
class solider{
    private:
        string name, fname, battalion, rank, course, idNumber, ww; //fname = Father Name , ww = War Wounded
        int age;
        float height, weight;
    public: 
        solider(){
            name = "Muhammad Abdullah";
            fname = "Zahid Mehmood";
            rank = "Lieutenant Colonel";
            battalion = "4th Commando Battalion ";
            course = "17th PMA L/C";
            idNumber = "PA-1904";
            age = 30;
            height = 5.9;
            weight = 75;
            ww = "Yes";
        }
        void printData();
};
int main(){
    solider Abdullah;
    Abdullah.printData();
    return 0;
}
void solider :: printData(){
    cout<<" --: Solider Information :--"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Father Name: "<<fname<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Rank: "<<rank<<endl;
    cout<<"Army Number: "<<idNumber<<endl;
    cout<<"Battalion: "<<battalion<<endl;
    cout<<"Course: "<<course<<endl;
    cout<<"Height: "<<height<<endl;
    cout<<"Weight: "<<weight<<endl;
    cout<<"War Wounded: "<<ww<<endl;
}