#include <iostream>

using namespace std;

int main() {
  const int DIM = 30, VAL = 10;
  int arr[DIM];
  int cont[VAL] = {0};
  int max = 0, volte = 0;
  
  cout<<"Inserisci array ("<<DIM<<" posizioni): ";
  for(int i = 0; i<DIM; i++) {
    int tmp;
    cin>>tmp;
    arr[i] = tmp% VAL +1;
  }
  
  for(int i = 0; i<DIM; i++) {
   cont[arr[i]-1]++;
  }
  
  cout<<"\n\n";
  
  for(int i = 0; i<VAL; i++) {
   if(cont[i] > volte) {
     max = i;
     volte = cont[i];
   }
  }
  
  cout<<"Il valore apparso maggiormente e' stato "<<max<<" con "<<volte<<" occorrenze";
  cout<<"\n\n";
  
  for(int i = 0; i<VAL; i++) {
   cout<<i+1<<" appare "<<cont[i]<<" volte\n";
  }
  
  cout<<endl;
  system("pause >nul");
}
