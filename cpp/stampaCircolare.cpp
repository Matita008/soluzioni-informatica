#include <iostream>

using namespace std;

int main() {
  const int DIM = 10;
  int arr[DIM];
  int offs;
  
  cout<<"Inserisci array ("<<DIM<<" posizioni): ";
  for(int i = 0; i<DIM; i++) {
    cin>>arr[i];
  }
  
  cout<<"Da quale posizione vuoi l'array? ";
  cin>>offs;
  for(int i = offs; i<DIM+offs; i++) {
    cout<<arr[i%DIM]<<" ";
  }
  
  cout<<endl;
  system("pause");
}
