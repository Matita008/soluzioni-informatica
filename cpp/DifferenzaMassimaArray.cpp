#include <iostream>

using namespace std;

int main() {
  const int DIM = 10;
  int arr[DIM];
  int min, max;
  cout<<"Inserisci array ("<<DIM<<" posizioni): ";
  for(int i = 0; i<DIM; i++) {
    cin>>arr[i];
  }
  min = max = arr[0];
  for(int i = 1; i<DIM; i++) {
    int cur = arr[i];
    if(cur < min) min = cur;
    if(cur > max) max = cur;
  }
  cout<"Differenza massima: ";
  cout<<max-min;
  system("pause >nul");
}
