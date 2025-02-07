#include <iostream>

using namespace std;

int main() {
  const int DIM = 10; //1 1 2 3 5 8 13 21 34 55
  int val[DIM];
  int prev1 = 0, prev2 = 1;
  bool ordine = true;
  for(int i = 0; i<DIM; i++) {
    cin>>val[i];
  }
  
  for(int i = 0; i<DIM; i++) {
    if(val[i] != prev2) {
      ordine = false;
      break;
    }
    
    int tmp = prev1 + prev2;
    prev1 = prev2;
    prev2 = tmp;
  }
  
  cout<<(ordine ? "\nGiusto" : "Sbagliato");
  cout<<endl;
  system("pause >nul");
}
