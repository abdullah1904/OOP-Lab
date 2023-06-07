#include <iostream>
using namespace std;
class Formula{
protected:
    string areaFormula;
public:
    Formula();
    void show();
};
class Square:public Formula{
public:
    Square();
    void show();
};
class Rectangle : public Square{
public:
    Rectangle();
    void show();
};
int main(){
    Formula f;
    Square s;
    Rectangle r;
    f.show();
    s.show();
    r.show();
    return 0;
}
Formula::Formula(){
    areaFormula = "EMPTY";
}
void Formula::show(){
    cout<<"Area Formula is: "<<areaFormula<<endl;
}
Square::Square(){
    areaFormula = "Square of One Side of Square";
}
void Square::show(){
    cout<<"Area Formula for Square is: "<<areaFormula<<endl;
}
Rectangle::Rectangle(){
    areaFormula = "Product of Length and Width of Rectangle";
}
void Rectangle::show(){
    cout<<"Area Formula for Rectangle is: "<<areaFormula<<endl;
}