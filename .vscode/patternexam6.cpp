#include <iostream>
using namespace std;
int main (){
    int size,i,j,k;
    cout<<"enter size";
    cin>>size;
    for(i=0;i<=size;i++){
        for(j=size;j>i;j--){
            cout<<" ";
        }
        for(k=0;k<i*2-1;k++){
            cout<<"*";
        }
           cout<<"\n";
    }
    /*
    for(i=0;i<size-1;i++){
        for(j=0;j<i;j++){
            cout<<" ";
        }
    }
    */
    for(i=0;i<=size-1;i++){
        for(j=0;j<=i;j++){
            cout<<" ";
        }
        for(k=(size*2-4)-((i*2)-1);k>0;k--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}