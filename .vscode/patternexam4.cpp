#include <iostream>
using namespace std;
int main (){
    int size =5,i,j,k;
    for(i=0;i<=size;i++){
        for(j=size;j>i;j--){
            cout<<" ";
        }
        for(k=0;k<i*2-1;k++){
            cout<<"*";
        }
           cout<<"\n";
    }
    for(i=0;i<size-1;i++){
        for(j=0;j<i;j++){
            cout<<" ";
        }
        for(k=0;k<(size-i)*2-1;k--);{
            cout<<"*";
        }
        cout<<"\n";
    }
}