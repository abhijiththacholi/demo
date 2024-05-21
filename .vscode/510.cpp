#include<iostream>
using namespace std;
int main (){
    cout<<"enter the arry size";
    int arrysize;
    cin>>arrysize;
    int arr[arrysize];
    cout<<"ennter the arry elements"<<endl;
    for(int i=0;i<arrysize;i++)
    {
        cin>>arr[i];
    }
    cout<<"print all numbers";
    for(int i=0;i<arrysize;i++){
        cout<<arr[i]<<" ";
    }
}