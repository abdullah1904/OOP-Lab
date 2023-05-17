#include <iostream>
#include <string>
using namespace std;
class solider{
    private:
        string name, fname, battalion, rank, course, idNumber, ww; //fname = Father Name , ww = War Wounded
        int age;
        float height, weight;
    public: 
        solider(string Name = "Muhammad Abdullah",string Fname = "Zahid Mehmood", string Rank = "Lieutenant Colonel",string Battalion = "4th Commando Battalion", string Course = "17th PMA L/C", string Id = "PA-1904",int Age = 30, double Height = 5.9, double Weight = 75.7, string WW = "Yes"){
            name = Name;
            fname = Fname;
            rank = Rank;
            battalion = Battalion;
            course = Course;
            idNumber = Id;
            age = Age;
            height = Height;
            weight = Weight;
            ww = WW;
        }
        void getData();
        void printData();
};
int main(){
    solider Abdullah;
    Abdullah.printData();
    Abdullah.getData();
    Abdullah.printData();
    return 0;
}
void solider :: getData(){
    cout<<" --: Enter Solider Information :-- "<<endl;
    cout<<"Enter Solider Name: ";
    getline(cin>>ws,name);
    cout<<"Enter Solider Father Name: ";
    getline(cin>>ws,fname);
    cout<<"Enter Solider Age: ";
    cin>>age;
    cout<<"Enter Solider rank: ";
    getline(cin>>ws,rank);
    cout<<"Enter Solider Army Number: ";
    getline(cin>>ws,idNumber);
    cout<<"Enter Solider Battalion: ";
    getline(cin>>ws,battalion);
    cout<<"Enter Solider Course: ";
    getline(cin>>ws,course);
    cout<<"Enter Solider Height: ";
    cin>>height;
    cout<<"Enter Solider Weight: ";
    cin>>weight;
    cout<<"Enter Solider War Wounded Status: ";
    getline(cin>>ws,ww);
}
void solider :: printData(){
    cout<<" --: Solider Information :--"<<endl;
    cout<<"Name:        "<<name<<endl;
    cout<<"Father Name: "<<fname<<endl;
    cout<<"Age:         "<<age<<endl;
    cout<<"Rank:        "<<rank<<endl;
    cout<<"Army Number: "<<idNumber<<endl;
    cout<<"Battalion:   "<<battalion<<endl;
    cout<<"Course:      "<<course<<endl;
    cout<<"Height:      "<<height<<endl;
    cout<<"Weight:      "<<weight<<endl;
    cout<<"War Wounded: "<<ww<<endl;
}