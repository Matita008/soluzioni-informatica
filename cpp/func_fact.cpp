#include <iostream>

using namespace std;

int fact(int n) {
  if(n<2) return n;
  return n * fact(n-1);
}

int main() {
  int n;
  cout<<"Inserisci il numero: ";
  cin>>n;
  cout<<"Ecco il fattoriale di "<<n<<": "<<fact(n);
  cout<<endl;
  system("pause");
}
