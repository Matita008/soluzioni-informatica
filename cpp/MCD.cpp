#include <iostream>

using namespace std;

int main() {
  int num1, num2, r;
  do {
    cout<<"Inserisci i due valori di cui vuoi trovare l'MCD separandoli con uno spazio \" \": ";
    cin>>num1;cin>>num2;
    if(num1<1 || num2<1) cout<<"\nUno dei numeri inseriti e' <0, Riprova!\n";
  } while(num1<1 || num2<1);

  
  if(num1<num2) {
    int tmp = num1;
  	num1 = num2;
  	num2 = tmp;
  }
  
  r = num1 %num2;
  while (r != 0) {
    num1 = num2;
    num2 = r;
    r = num1 %num2;
  }
  
  cout<<num2<<endl;
  system("pause");
}
