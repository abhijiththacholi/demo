#include<iostream>
using namespace std;
int main(){
    int size= 5,i,j,k;
    int alpha=65;
    for(i=1;i<=size;i++){
        for(j=1;j<=i;j++){
            cout<<(char)(alpha+1);
            for(k=0;k>=i;+1){
                cout<<"\n";
            }
        }
    }
}