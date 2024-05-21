#include<iostream>
using namespace std;
int main(){
    int i,n,count=0;
    cout<<"enter the arry the size ";
    cin>>n;
    int a[n];
    cout<<"enter the arry elements";
  for(i=0;i<n;i++){
    cin>>a[i];
  }
  for(i=0;i<n;i++){
    if (a[i]<0){
        count++;
    }
    cout<<"total number of negative elements in arry"<<count;

  }
}