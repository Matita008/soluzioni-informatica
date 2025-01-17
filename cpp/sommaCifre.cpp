#include <iostream>

using namespace std;

int main() {
  int n, somma = 0;
  cout<<"Inserisci il numero di cui vuoi sapere la somma delle cifre: ";
  cin>>n;
  while(n != 0) {
    int cur=n %10;
    n/=10;
    //cout<<cur<<" ";
    somma+=cur;
  }
  cout<<"\nLa somma delle cifre del numero inserito e': "<<somma<<endl;
  system("pause");
}
