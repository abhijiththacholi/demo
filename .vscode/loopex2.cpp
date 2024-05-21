#include <iostream>
using namespace std;
int main (){
    int size=5,i,j,k;
    int num=1;
    for(i=0;i<=size;i++){
        for(j=1; j<=i;j++){
            cout<<num;
            num;
        }
        for(k=5;k>=i;k--){
            cout <<" ";
        }
        cout<<"\n";
        num=1;
    }
    return 0;
}