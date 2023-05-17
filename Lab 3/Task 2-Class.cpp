#include <iostream>
#include <string>
using namespace std;
class player
{
private:
    string name, country;
    int age, t20, odi, rank;     // t20 = Runs in T20, odi = Runs in ODI
    float height, weight;

public:
    void getInfo();
    void printInfo();
};
int main()
{
    player babarAzam;
    babarAzam.getInfo();
    babarAzam.printInfo();
    return 0;
}
void player :: getInfo()
{
    cout << " --: Player Information Entry :-- " << endl;
    cout << "Enter Player Name: ";
    getline(cin, name);
    cout << "Enter Player Country: ";
    getline(cin, country);
    cout<<"Enter Player Rank: ";
    cin>>rank;
    cout << "Enter Player Age: ";
    cin >> age;
    cout << "Enter Player Height: ";
    cin >> height;
    cout << "Enter Player Weight: ";
    cin >> weight;
    cout << "Enter Player T20 Runs: ";
    cin >> t20;
    cout << "Enter Player ODI Runs: ";
    cin >> odi;
}
void player :: printInfo(){
    cout<<"Player Name:     "<<name<<endl;
    cout<<"Player Country:  "<<country<<endl;
    cout<<"Player Rank:     "<<rank<<endl;
    cout<<"Player Age:      "<<age<<endl;
    cout<<"Player Height:   "<<height<<endl;
    cout<<"Player Weight:   "<<weight<<endl;
    cout<<"Player T20 Runs: "<<t20<<endl;
    cout<<"Player ODI Runs: "<<odi<<endl;
}