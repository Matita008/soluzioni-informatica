#include <iostream>

using namespace std;

int main() {
  const int DIM = 10;
  int arr[DIM];
  int num, pos = -1;
  
  cout<<"Inserisci array ("<<DIM<<" posizioni): ";
  for(int i = 0; i<DIM; i++) {
    cin>>arr[i];
  }
  
  cout<<"Inserisci numero da cercare: ";
  cin>> num;
  
  for(int i = 0; i<DIM; i++) {
    if(arr[i] == num) {
      pos = i;
      break;
    }
  }
  
  if(pos != -1) cout<<num<<" e' presente in posizione "<<pos;
  else cout<<num<<" non e' presente";
  
  cout<<endl;
  system("pause");
}
