#include <iostream>
using namespace std;
union casualityMeter{
    int initialCasualties;
    int update;
    int finalCasualties;
};
int main(){
    casualityMeter earthQuick;
    earthQuick.initialCasualties = 10;
    cout<<"Number of Casualties at initial is: "<<earthQuick.initialCasualties<<endl;
    earthQuick.update = 15;
    cout<<"Number of Casualties at 1300 Hours is: "<<earthQuick.update<<endl;
    earthQuick.update = 20;
    cout<<"Number of Casualties at 1600 Hours is: "<<earthQuick.update<<endl;
    earthQuick.update = 25;
    cout<<"Number of Casualties at 1900 Hours is: "<<earthQuick.update<<endl;
    earthQuick.finalCasualties = earthQuick.update;
    cout<<"Number of Casualties at Final is: "<<earthQuick.finalCasualties<<endl;
    return 0;
}
