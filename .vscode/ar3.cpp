#include<iostream>
using namespace std;
int main()
{
      int n;
      int sum=0;
    cout<<"enter the arry size";
      cin>>n;
      int a[n];
   cout<<"enter the arry elements"<<endl;
    for(int i= 0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"the sum of numbers"<<endl;

    for(int i=0;i<n;i++){
        sum=(sum+a[i]);
        
        
        
    }
    cout<<sum;
    return 0;
}