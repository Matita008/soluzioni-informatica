#include <iostream>

using namespace std;

int main() {
  int n1, n2, div1 = 0, div2 = 0;
  cout<<"Inserisci i numeri da verificare: ";
  cin>>n1>>n2;
  
  for(int i = 1; i < n1; i++) {
    if(n1 %i == 0) {
      div1+=i;
    }
  }
  
  for(int i = 1; i < n2; i++) {
    if(n2 %i == 0) {
      div2+=i;
    }
  }
  
  if(div2 == n1 && div1 == n2) {
    cout<<"I numeri inseriti sono amici!";
  } else {
    cout<<"I numeri inseriti non sono amici!";
  }
  
  cout<<endl;
  system("pause");
}
