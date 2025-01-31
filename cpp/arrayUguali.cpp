#include <iostream>

using namespace std;

int main() {
  const int DIM = 10;
  int arr1[DIM], arr2[DIM];
  bool diff = false;
  
  cout<<"Inserisci array 1 ("<<DIM<<" posizioni): ";
  for(int i = 0; i<DIM; i++) {
    cin>>arr1[i];
  }
  
  cout<<"Inserisci array 2 ("<<DIM<<" posizioni): ";
  for(int i = 0; i<DIM; i++) {
    cin>>arr2[i];
  }
  
  for(int i = 0; i<DIM; i++) {
    if(arr1[i] != arr2[i]) diff = true;
  }
  
  cout<<diff<<endl;
  system("pause");
}
