#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number";
    cin>>a;
    if(a%5==0){
        cout<<"it is divisible by 5";
    }
    else if (a%11==0){
        cout<<"it is divisible by 11";
    
    }
    else{
        cout<<"it is not divisible";
        
    }

}