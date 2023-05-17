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
    void getInfo();
    void printInfo();
};

#endif