#include <iostream>
#include <iomanip>
using namespace std;
struct soilder
{
  string name;
  string rank;
  string country;
};
void print(soilder[], int);
int main()
{
  int n = 5;
  soilder team[5] = {
      {"Muhammad Abdullah", "Lt. Col.", "Pakistan"},
      {"Tahir Masood Bhutta", "Maj. Gen.", "Pakistan"},
      {"Tariq Mehmmod", "Brig. Gen.", "Pakistan"},
      {"Napolean Boneparte", "Gen.", "France"},
      {"Ali Sarwar", "Maj.", "Pakistan"}};
  print(team, n);
  return 0;
}
void print(soilder array[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout<<"--:The Details of Number "<<i+1<<" Team Member:--"<<endl;
    cout<<"Name: "<<array[i].name<<endl;
    cout<<"Rank: "<<array[i].rank<<endl;
    cout<<"Country "<<array[i].country<<endl<<endl;
  }
}
