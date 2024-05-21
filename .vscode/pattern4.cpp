#include<iostream>
using namespace std;
int main(){
    int size =5,i,j;
    int num=1;
    for(i=0;i<size;i++){
        for(j=0;j<=i;j++){
            cout<<num;
            num++;
        }
        cout<<"\n";
        num=1;
    }
    return 0;
}