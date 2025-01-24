#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
  const int DIM = 10, N = 100;
  int arr[DIM];
  srand(time(0));
  for(int i = 0; i<DIM; i++) {
    arr[i] = rand() %100 + arr[i-1];
  }
  cout<<"Array generato: ";
  for(int i = 0; i<DIM; i++) {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  system("pause");
}
