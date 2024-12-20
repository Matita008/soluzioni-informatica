#include <iostream>

using namespace std;

int main() {
  int n, div1 = 0, div2 = 0;
  cout<<"Inserisci il numero a cui cercare l'amico: ";
  cin>>n;
  
  for(int i = 1; i < n; i++) {
    if(n %i == 0) {
      div1+=i;
    }
  }
  
  for(int i = 1; i < div1; i++) {
    if(div1 %i == 0) {
      div2+=i;
    }
  }
  
  if(div2 == n && n != div1) {
    cout<<"Il numero amico di "<<n<<" e': "<<div1;
  } else {
    cout<<"Il numero inseriti non ha amici!";
  }
  
  cout<<endl;
  system("pause");
}
