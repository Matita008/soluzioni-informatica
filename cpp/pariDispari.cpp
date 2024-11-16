#include <iostream>

using namespace std;

int main() {
  int p = 0, d = 0, cur;
  cout<<"Inserisci un numero\n ";
  cin>>cur;
  while(cur != 0) {
    if(cur %2) d++;
    else p++;
    cout<<"\nInserisci un'altro numero\n ";
    cin>>cur;
  }
  cout<<"I numeri pari sono: "<<p<<"\t e quelli dispari sono: "<<d;
  cout<<endl;
  system("pause");
}
