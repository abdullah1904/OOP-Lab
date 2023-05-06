#include <iostream>
using namespace std;
struct basicinfo{
    string name;
    string fname;
    string gender;
    int age;
};
struct academicinfo{
    string dept;
    int rollno;
    int session;
    double cgpa;
};
struct information{
    basicinfo basic;
    academicinfo academic;
};
void print(information);
int main(){
    information Abdullah = {{"Muhmmad Abdullah" , "Zahid Mehmood", "Male", 18},{"Computer Science",525,2022,3.29}};
    information AbuBakar = {{"Muhammad Abu Bakar", "Zahid Mehmood", "Male", 14},{"Software Engineering", 00, 2026, 00.0}};
    print(Abdullah);
    print(AbuBakar);
    return 0;
}
void print(information info){
    cout<<"Name: "<<info.basic.name<<endl;
    cout<<"Father Name: "<<info.basic.fname<<endl;
    cout<<"Gender: "<<info.basic.gender<<endl;
    cout<<"Age: "<<info.basic.age<<endl;
    cout<<"Department: "<<info.academic.dept<<endl;
    cout<<"Roll No.: "<<info.academic.rollno<<endl;
    cout<<"Session: "<<info.academic.session<<endl;
    cout<<"CGPA: "<<info.academic.cgpa<<endl;
}