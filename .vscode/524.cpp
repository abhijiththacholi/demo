#include<iostream>
using namespace std;
int main(){
    int i,j,row,column;
    cout<<"enter the matrix of row and cloumn and find the upper trangle";
    cin>>i>>j;
    int uppermatrix[i][j];
    cout<<"enter the matrix iteam";
    for(row=0;row<i;row++){
        for(column=0;column<i;column++){
            cin>>uppermatrix[row][column];
        }
    }
    cout<<"the result of upper trangle matrix is";
    for(row=0;row<i;row++)

    {
        cout<<"\n";
        for(column=0;column<j;column++){
            if(column>=row){
                cout<<"upperimatrix [row][column]"<<" ";
            }
            else{
                cout<<"0";
            }
        }
    }
}