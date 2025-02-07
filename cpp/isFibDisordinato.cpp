#include <iostream>
#include <math.h>

using namespace std;

int main() {
  const int DIM = 5, MAX = 10;
  int val[DIM], fib[MAX];
  int prev1 = 0, prev2 = 1;
  bool pres = true;
  
  for(int i = 0; i<MAX; i++) {
    fib[i] = prev2;
    int tmp = prev1 + prev2;
    prev1 = prev2;
    prev2 = tmp;
  }
  
  for(int i = 0; i<DIM; i++) {
    cin>>val[i];
  }
  
  for(int i = 0; i<DIM; i++) {
    int cur = val[i];
    int pos = sqrt(cur);
    
    if(fib[pos] < cur)  {
      for(int j = pos; j<MAX; j++) {
        if(fib[j] == cur) break;
        if(fib[j] > cur) {
          pres = false;
          break;
        }
      }
    } else {
      for(int j = pos; j>=0; j--) {
        if(fib[j] == cur) break;
        if(fib[j] < cur) {
          pres = false;
          break;
        }
      }
    }
    
    if(!pres) break;
  }
  
  cout<<(pres ? "\nGiusto" : "Sbagliato");
  cout<<endl;
  system("pause >nul");
}
