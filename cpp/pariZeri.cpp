#include <iostream>

using namespace std;

int main() {
  const int MAX = 6;
  int i = 1, n;
  bool zero = true;
  cout<<"Inserisci la sequenza di "<<MAX<<" numeri separandoli con uno spazio \" \"\n";
  while(i <= MAX && zero) {
    cin>>n;
    if(i %2 == 0 && n != 0) zero = false;
    i++;
  }
  if(zero) cout<<"\n\nSi\n\n\n";
  else cout<<"\n\nNo\n\n\n";
  cout<<endl;
  system("pause");
}
