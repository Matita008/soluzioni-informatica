#include <iostream>

using namespace std;

int main() {
  const int DIM = 10; //Minimo 3
  int arr[DIM];
  bool found = true, cresc;
  int prec;
  
  cout<<"Inserisci array ("<<DIM<<" posizioni): ";
  for(int i = 0; i<DIM; i++) {
    cin>>arr[i];
  }
  
  prec = arr[1];
  cresc = arr[0] < prec;
  for(int i = 2; i<DIM; i++) {
    if(prec < arr[i] != cresc) {
      found = false;
      break;
    }
  }
  
  if(!found)  cout<<"L'array e' misto";
  else if(cresc)  cout<<"L'array e' crescente";
  else  cout<<"L'array e' descrescente";
  
  cout<<endl;
  system("pause");
}
