#include <iostream>

using namespace std;

int main() {
  int n, fact = 1;
  cout<<"Inserisci il numero: ";
  cin>>n;
  for(int i = n; i != 1; i--) {
    fact*=i;
  }
  cout<<"Ecco il fattoriale di "<<n<<": "<<fact;
  cout<<endl;
  system("pause");
}
