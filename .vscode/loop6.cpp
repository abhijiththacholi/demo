#include <iostream>
using namespace std;
int main(){
    int size=10;
    for(int i=0;i<10;i++){
        for(int j=0 ;j<10;j++){
          if(i==0 || i==10-1 || j==0||j==10-1){
            cout<<"*";
          }else{
            cout<<" ";
          }
        }
        cout<<"\n";
    }
}