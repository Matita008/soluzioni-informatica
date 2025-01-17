#include <iostream>

using namespace std;

int main() {
  int n, div = 2, i;
  cout<<"Inserisci il numero: ";
  cin>>n;
  cout<<"La fattorizzazione di "<<n<<" e': ";
  do {
    for(i = div; i * i <= n; i+=2) {
      //cout<<"i";//Togli il commento per contare i cicli interni
      if(n %i == 0) {
        div = i;
        cout<<div<<"*";
        n/=div;
        break;
      }
      if(i==2) i--;
    }
    //cout<<"e";//Togli il commento per contare i cicli esterni
  } while (div == i && div*div <= n);
  cout<<n;
  cout<<endl;
  system("pause");
}
