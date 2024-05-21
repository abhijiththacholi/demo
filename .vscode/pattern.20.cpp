#include<iostream>
using namespace std;
int main(){
    int size=5,i,j,k;
    int alpha =65;
    for(i=0;i<size;i++){
        for(j=0;j<=i;j++){
            cout<<(char)(alpha+i);
        }
        cout<<"\n";
        alpha =65;
        

    }
    return 0;
}