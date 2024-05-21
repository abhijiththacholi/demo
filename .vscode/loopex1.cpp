#include<iostream>
using namespace std;
int main (){
    int size= 5,num=1,k,j,i;
    for(i=1;i<=size;i++){
        for(j=0;j<i;j++){
            cout<<" ";
        }
        for(k=5;k>=i;k--){
            cout<<num;
            num++;
        }
        num=1;
        cout<<endl;
        

    

    }
    

return 0;
}