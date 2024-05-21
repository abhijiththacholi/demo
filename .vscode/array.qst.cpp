#include<iostream>
using namespace std;
int main(){
    int i,n,odd=0,even=0;
    cout<<"enter the arry size";
    cin>>n;
    int a[n];
    cout<<"entre the the arry elements";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            odd++;
        }
        else{
            even++;
        }
    }
    cout<<"there are"<<even<<"evennumbers and"<<odd<<"odd numbers";
}