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
    for(int j = 0; j<DIM; j++) {
      if(arr1[i] != arr2[j]) {
        diff = false;
        break;
      }
    }
    if(diff) break;
  }
  
  cout<<(diff ? "\nSbagliato" : "\nGiusto")<<endl;
  cout<<"\n\nPremi un tasto per uscire...";
  system("pause >nul");
}
