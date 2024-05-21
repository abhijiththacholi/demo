#include <iostream>
using namespace std;
int main(){
    int size=5,i,j,k;
    int num=1;
    for(i=1;i<=size;i++){
        for(j=1;j<=i;j++){
            cout<<" ";
            

        }
        for(k=5;k>=i;k--){
            cout<<num;
            num++;
        }
        
        cout<<"\n";
    }
    return 0;
}