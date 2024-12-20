#include <iostream>

using namespace std;

int main() {
  int n, div;
  cout<<"Inserisci il numero: ";
  cin>>n;
  cout<<"La fattorizzazione di "<<n<<" e': ";
  do {
    div = 1;
    for(int i = 2; i * i <= n; i+=2) {
      if(n %i == 0) {
        div = i;
        break;
      }
      if(i==2) i--;
    }
    if(div != 1) {
      cout<<div<<"*";
      n/=div;
    }
  } while (div != 1);
  cout<<n;
  cout<<endl;
  system("pause");
}
