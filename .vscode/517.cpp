#include<iostream>
using namespace std;
int main(){
    int trancepose[10][10],r=3,c=2,i,j;
    int a [3][3]={{1,2},{3,4},{5,6}};
    cout<<"the matrix is"<<endl;
    for(i=0;i<r;++i){
        for(j=0;j<c;++j){
            cout<<a[i][j]<<" ";
            cout<<endl;
        }
        cout<<endl;
        for(i=0;i<r;++i)
        for(j=0;j<c;++j){
            trancepose[j][i]=a[i][j];
        }
        cout<<"enter the trancepose of matrix"<<endl;
        for(i=0;i<c;++i){
            for(j=0;j<r;++j)
            cout<<trancepose[i][j]<<" ";
            cout<<endl;
        }
    }
    

}g