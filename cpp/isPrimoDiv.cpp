#include <iostream>

using namespace std;

int main() {
  int n, div = 0;
  cout<<"Inserisci il numero: ";
  cin>>n;
  for(int i = 2; i * i <= n; i+=2) {
    if(n %i == 0) { //se è un divisore lo salvo ed esco dal loop
      div = i;
      break;
    }
    if(i==2) i--; //il primo divisore possibile è 2, gli altri vanno di 2 in 2 tra i dispari quidi diminuisco di 1 il contatore (i) se è 2
  }
  if(div == 0) {
    cout<<"Il numero inserito e' primo!";
  } else {
    cout<<n<<" non e' primo e il suo divisore piu' piccolo e': "<<div;
  }
  cout<<endl;
  system("pause");
}
