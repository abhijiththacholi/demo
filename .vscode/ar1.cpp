#include<iostream>
using namespace std;
int main(){
    cout<<"enter the array size:";
    int arrysize;
    cin>>arrysize;
    int arr[arrysize];
    cout<<"enter the arry elements"<< endl;
    for(int i=0;i<arrysize;i++)
    {
        cin>>arr[i];
    }
      cout<<"print all numbers "<<endl;
      for(int i=0;i<arrysize;i++){
        cout<<arr[i]<<" ";
      }
}