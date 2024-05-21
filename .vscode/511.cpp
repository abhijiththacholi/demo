#include<iostream>
using namespace std;
int main(){
    cout<<"entr the arry size";
    int arrysize,i;
    int n;
    cin>>arrysize;
    int arr [arrysize];
    cout<<"prient arry elements"<<endl;
    for(int i=0;i<arrysize;i++)
    {
        cin>>arr [i];
    }
    cout<<"prient alle negative numbers";
    for(int i=0;i<arrysize;i++)
    {
        if(arr[i]<0){
            cout<<arr[i]<<" ";
        }
    
    }

    
}