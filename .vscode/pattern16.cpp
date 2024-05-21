#include<iostream>
using namespace std;
int main (){
    int size=5,i,j,k;
    for(i=0;i<size;i++){
        for(j=0;j<=i;j++){
            cout<<" ";
        }
        for(k=0;k<2*(size-i)-1;k++){
            cout<<(k+1);
        }
        cout<<"\n";
    }
    return 0;
}