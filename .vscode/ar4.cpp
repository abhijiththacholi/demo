#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the arry size";
    cin>>n;
    int a[n];
    cout<<"enter the arry elements";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"print minimumand maximum number";
    int max =a[0];
    int min =a[0];
    for (int i=0;i<n;i++)
    {
     if(a[i]>max){
        max=a[i];
     }
     if(a[i]<min){
        min=a[i];
     }
    }
        cout<<"maximum element"<<" " <<max<<endl;
        cout<<"minimum element" <<" " <<min<<endl;
        return 0;

}