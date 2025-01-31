#include <iostream>

using namespace std;

int main() {
  const int DIM = 10;
  int arr[DIM];
  int num, pos = -1, min = 0, max = DIM - 1;

  cout<<"Inserisci array ("<<DIM<<" posizioni)\nDEVE ESSERE CRESCENTE!\n  -> ";
  for(int i = 0; i<DIM; i++) {
    cin>>arr[i];
  }
  
  cout<<"Inserisci numero da cercare: ";
  cin>> num;
  
  for (int i = max/2; min < max; ) {
    int cur = arr[i];
    //cout<<"Min: "<<min<<"\t max: "<<max<<" i: "<<i<<" num: "<<cur;  //Debug
    
    if(cur == num) {
      pos = i;
      break;
    }
    
    if(cur > num) max = i;
    else min = i;
    
    i = (((double)(max-min) /2) + 0.5) +min; // valore medio preso per eccesso
    //cout<<"\tF: "<<(int)((double)(max-min) +0.5)<<endl;
    if(max == 1) i = 0;  //necessario pk 1-0/2 = 0.5 che +0.5 fa 1 e rimarrebbe quindi bloccato
  }
  
  cout<<endl;
  if(pos != -1) cout<<num<<" e' presente in posizione "<<pos;
  else cout<<num<<" non e' presente";
  
  //cout<<endl<<min<<" "<<max<<" ";  //Debug
  cout<<"\n\n\nFine...\n\n\n\nTasto destro per uscire";
  system("pause >nul");
}
