#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cout<<"enter the size of row and column";
    cin>>n>>m;
    int a[n][m];
    cout<<"enter the value of matrix";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            cin>>a[i][j];
        }
     cout<<"print the lowertrangle"<<endl;
     for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i<j){
                cout<<" ";
            }
            else{
                cout<<a[i][j];
            }
        }
           cout<<endl;

        }
    

}