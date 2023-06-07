#include <iostream>
#include <string>
using namespace std;
class Mercedes{
private:
    string brand,model,make,fuelType,color;
    int yearOfManufacture, engineCapacity;
public:
    Mercedes(string="Mercedes Benz",string="S Class",string="German", string="Electrical",string="Black", int=2023, int=1700);
    void display();
    void set();
};
class BMW{
private:
    string brand,model,make,fuelType,color;
    int yearOfManufacture, engineCapacity;
public:
    BMW(string="BMW",string="i8",string="Italy", string="Electrical",string="White-Blue", int=2022, int=1200);
    void display();
    void set();
};
class showRoom{
private:
    Mercedes S8;
    BMW m5;
public:
    showRoom(string mec = "Mercedes", string bmw = "BMW"): S8(mec), m5(bmw) {}
    showRoom& displayAll(){
        S8.display();
        m5.display();
        return *this;
    }
    showRoom& setAll(){
        S8.set();
        m5.display();
        return *this;
    }
};
int main(){
    showRoom Lahore;
    Lahore.displayAll().setAll().displayAll();
    return 0;
}
Mercedes::Mercedes(string b, string md, string mk, string ft, string c, int ym, int ec){
    this->brand = b;
    this->model = md;
    this->make = mk;
    this->fuelType = ft;
    this->color = c;
    this->yearOfManufacture = ym;
    this->engineCapacity = ec;
}
BMW::BMW(string b, string md, string mk, string ft, string c, int ym, int ec){
    this->brand = b;
    this->model = md;
    this->make = mk;
    this->fuelType = ft;
    this->color = c;
    this->yearOfManufacture = ym;
    this->engineCapacity = ec;
}
void Mercedes::set(){
    cout<<"     --: Enter Car Details :--   "<<endl;
    cout<<"Enter Car Brand: ";
    getline(cin>>ws,this->brand);
    cout<<"Enter Car Model: ";
    getline(cin>>ws,this->model);
    cout<<"Enter Car Make: ";
    getline(cin>>ws,this->make);
    cout<<"Enter Car Fuel Type: ";
    getline(cin>>ws,this->fuelType);
    cout<<"Enter Car Color: ";
    getline(cin>>ws,this->color);
    cout<<"Enter Car Year of Manufacture: ";
    cin>>yearOfManufacture;
    cout<<"Enter Car Engine Capacity: ";
    cin>>engineCapacity;
}
void BMW::set(){
    cout<<"     --: Enter Car Details :--   "<<endl;
    cout<<"Enter Car Brand: ";
    getline(cin>>ws,this->brand);
    cout<<"Enter Car Model: ";
    getline(cin>>ws,this->model);
    cout<<"Enter Car Make: ";
    getline(cin>>ws,this->make);
    cout<<"Enter Car Fuel Type: ";
    getline(cin>>ws,this->fuelType);
    cout<<"Enter Car Color: ";
    getline(cin>>ws,this->color);
    cout<<"Enter Car Year of Manufacture: ";
    cin>>yearOfManufacture;
    cout<<"Enter Car Engine Capacity: ";
    cin>>engineCapacity;
}
void Mercedes:: display(){
    cout<<"             --: Car Details :--             "<<endl;
    cout<<"Car Brand:               "<<this->brand<<endl;
    cout<<"Car Model:               "<<this->model<<endl;
    cout<<"Car Make:                "<<this->make<<endl;
    cout<<"Car Fuel Type:           "<<this->fuelType<<endl;
    cout<<"Car Color:               "<<this->color<<endl;
    cout<<"Car Year of Manufacture: "<<this->yearOfManufacture<<endl;
    cout<<"Car Engine Capacity:     "<<this->engineCapacity<<endl<<endl;
}
void BMW:: display(){
    cout<<"             --: Car Details :--             "<<endl;
    cout<<"Car Brand:               "<<this->brand<<endl;
    cout<<"Car Model:               "<<this->model<<endl;
    cout<<"Car Make:                "<<this->make<<endl;
    cout<<"Car Fuel Type:           "<<this->fuelType<<endl;
    cout<<"Car Color:               "<<this->color<<endl;
    cout<<"Car Year of Manufacture: "<<this->yearOfManufacture<<endl;
    cout<<"Car Engine Capacity:     "<<this->engineCapacity<<endl<<endl;
}