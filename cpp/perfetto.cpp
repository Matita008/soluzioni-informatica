#include <iostream>

using namespace std;

int main() {
  int n, div = 0;
  cout<<"Inserisci il numero: ";
  cin>>n;
  for(int i = 1; i < n; i++) {
    if(n %i == 0) { //se è un divisore lo salvo ed esco dal loop
      div+=i;
    }
  }
  if(div == n) {
    cout<<"Il numero inserito e' perfetto!";
  } else {
    cout<<"Il numero inserito non e' perfetto!";
  }
  cout<<endl;
  system("pause");
}
