#include <iostream>

using namespace std;

int main() {
  const int DIM = 10;
  int val[DIM];
  int prev1 = 0, prev2 = 1;
  
  for(int i = 0; i<DIM; i++) {
    val[i] = prev2;
    int tmp = prev1 + prev2;
    prev1 = prev2;
    prev2 = tmp;
  }
  
  for(int i = 0; i<DIM; i++) {
    cout<<val[i]<<" ";
  }
  
  cout<<endl;
  system("pause");
}
