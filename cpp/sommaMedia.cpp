#include <iostream>

using namespace std;

int main() {
  int somma, i = 0;
  cout<<"Inserisci un numero\n ";
  cin>>somma;
  while(i<10)
  {
    int t;
    cout<<"\nInserisci un'altro numero\n ";
    cin>>t;
    somma+=t;
    i++;
  }
  cout<<"La somma dei numeri inseriti e': "<<somma<<"\nLa media dei numeri inseriti e'"<<somma/10.0;
}