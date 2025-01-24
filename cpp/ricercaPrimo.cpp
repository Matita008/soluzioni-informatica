#include <iostream>

using namespace std;

int main() {
  system("title Cercatore minore numero primo maggiore");
  int n, div = 1;
  cout<<"Numero: ";
  cin>>n;
  n++;
  if(n %2 == 0 && n!=2) n++;
  while(div != 0) {
    div = 0;
    for(int i = 3; i * i <= n; i+=2) {
      if(n %i == 0) {
        div = i;
        break;
      }
    }
    n+=2;
  }
  cout<<"Il minore numero primo maggiore del numero inserito e' "<<n-2<<endl;
  system("pause >nul");
}
