#include<iostream>
using namespace std;
int main(){
    int n;
    int i,ce=0,co=0;
    cout<<"enter the size of arry";
    cin>>n;
    int a[n];
    int arr[n];
    cout<<"entr the arry elements";
    for(i=0;i<n;i++);
        {
            cin>>arr[i];
        }
    

for(i=0;i<n;i++){
    if(arr[i]%2==0){
        ce++;
    }
    else{
        co++;
    }
}
cout<<"even numbers"<<ce<<endl;
cout<<"odd numbers"<<co<<endl;

}