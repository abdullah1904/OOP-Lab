#include <iostream>
using namespace std;
class Data
{
private:
    int *intptr = NULL, length = 0;

public:
    Data(int n)
    {
        length = n;
        intptr = new int[length];
    }
    void getData();
    void search(int x);
    void printData();
    ~Data()
    {
        delete[] intptr;
        intptr = NULL;
        cout <<endl<< "CLEARED";
    }
};
int main()
{
    int a;
    cout << "Enter Length/Quantity of data: ";
    cin >> a;
    Data d(a);
    d.getData();
    cout << "Enter a value to search in given data: ";
    cin >> a;
    d.search(a);
    cout << " --: Data :-- " << endl;
    d.printData();
    return 0;
}
void Data ::getData()
{
    for (int i = 0; i < length; i++)
    {
        cout << "Enter " << i + 1 << " Value: ";
        cin >> *(intptr + i);
    }
}
void Data ::search(int x)
{
    for (int i = 0; i < length; i++)
    {
        if (x == *(intptr + i))
        {
            cout << "Yes it is in our record" << endl;
            return;
        }
    }
    cout << "No it is not in out record" << endl;
    return;
}
void Data ::printData()
{
    for (int i = 0; i < length; i++)
    {
        cout << *(intptr + i) << " ";
    }
}