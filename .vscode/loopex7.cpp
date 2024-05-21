#include <iostream>
using namespace std;
int main(){
    int size=5,i,j,k;
    for(i=1;i<=size;i++){
        for(j=5;j<=i;j--){
            cout<<" ";
        }
        for(k=1;k>=i;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
}