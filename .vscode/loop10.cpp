#include <iostream>
using namespace std;

int main() {
  
  int size = 10,num=1 ;
  
  for (int i = 0; i < size; i++) {
    
    for (int j = 0; j<=i; j++) {
      cout << num;
      num++;
    }
    
    
    cout << "\n";
  }
  return 0;
}