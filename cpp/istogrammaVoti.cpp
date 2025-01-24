#include <iostream>

using namespace std;

int main() {
  const int OF = 18, DIM = 30-OF, FA = 2;
  int arr[DIM];
  int stu;
  cout<<"Quanti studenti sono? ";
  cin>>stu;
  for(int i = 0; i<DIM; i++) {
    arr[i] = 0;
  }
  cout<<"Inserisci voti ("<<stu<<" studenti): ";
  for(int i = 0; i<stu; i++) {
    int cur;
    cin>>cur;
    arr[cur-OF]++;
  }
  for(int i = 0; i<DIM; i++) {
    int perc = arr[i]/(float)stu*100;
    cout<<endl<<OF+i<<' ';
    for(int a = 0; a < perc; a+=FA) {
      cout<<'*';
    }
    cout<<' '<<perc<<"%\n";
  }
  cout<<endl;
  system("pause >nul");
}
