#include <iostream>;
using namespace std;
int main(){
    int size=5,i,j;
    for(i=0 ;i<size;i++){
        for(j=0; j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}