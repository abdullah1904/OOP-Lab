#include <iostream>
using namespace std;
int main(){
    int rows, columns;
    cout<<"Enter the rows length: ";
    cin>>rows;
    cout<<"Enter the columns length: ";
    cin>>columns;
    int **matrix = new int*[rows];
    for(int i=0;i<rows;i++){
        matrix[i] = new int[columns];
    }
    cout<<" --: Enter Matrix Elements :-- "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<"Enter the element at ("<<i+1<<","<<j+1<<") : ";
            cin>>matrix[i][j];
        }
    }
    cout<< " --: The Array Elements :--"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i =0; i<rows;i++){
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}