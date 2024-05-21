#include<iostream>
using namespace std;
int main (){
    int size=5,i,j,k;
    for(i=0;i<size;i++){
        for(j=0;j<(size-i)-i;j++)
        if(i==0||i==size-1||j==0||j==size-1){
            cout<<" ";
        }
        for(k=0;k<2*i+i;k++)
    }
}