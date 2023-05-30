#include <iostream>
using namespace std;
class Student{
private:
    string name, fname;
    int age, standard;
public:
    Student(string="", string="", int =00, int=00);
    void display();
    void set();
};
class Teacher{
private:
    string name, fname, qualification;
    int age, experience;
public:
    Teacher(string="" , string="", string="",int=00, int=00);
    void display();
    void set();
};
class School{
private:

public:
};
int main(){

    return 0;
}
Student::Student(string n, string fn, int ag, int std){
    this->name = n;
    this->fname =  fn;
    this->age = ag;
    this->standard =std;
}