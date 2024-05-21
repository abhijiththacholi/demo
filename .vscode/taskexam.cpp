#include <iostream>
using namespace std;
int main(){
    char c;
    cout<<"what you want to check";
    cin>>c;
    if((c>='a'&& c<='z')||(c>='A'&& c<'Z')){
        cout<<"its an alaphebet";
    }
    else{
        cout<<"its not alaphebet";
    }
    return 0;
}