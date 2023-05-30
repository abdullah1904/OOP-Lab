#ifndef Task5file
#define Task5file

#include <string>
class player
{
private:
    std::string name, country;
    int age, t20, odi, rank; // t20 = Runs in T20, odi = Runs in ODI
    float height, weight;

public:
    player(std::string n= "", std::string c = "", int a= 0, int t2= 00, int od= 00,int r=00, int h= 00, int w= 00);
    void getInfo();
    void printInfo();
};

#endif