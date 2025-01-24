#include <iostream>

using namespace std;

int main() {
  const int OF = 18, DIM = 30-OF, FA = 2;
  int voti[DIM];
  int stu;
  cout<<"Quanti studenti sono? ";
  cin>>stu;
  for(int i = 0; i<DIM; i++) {
    voti[i] = 0;
  }
  cout<<"Inserisci voti ("<<stu<<" studenti): ";
  for(int i = 0; i<stu; i++) {
    int cur;
    cin>>cur;
    if(cur>30||cur<18) {
      cout<<cur<<" non e' valido, inserisci un numero incluso tra 18 e 30: ";
      i--;
      continue;
    }
    voti[cur-OF]++;
  }
  for(int i = 0; i<DIM; i++) {
    int perc = voti[i]/(float)stu*100;
    cout<<endl<<OF+i<<' ';
    for(int a = 0; a < perc; a+=FA) {
      cout<<'*';
    }
    cout<<' '<<perc<<"%\n";
  }
  cout<<endl;
  system("pause >nul");
}
