#include <iostream>

using namespace std;

int main() {
  int num1, num2, r, n1, n2;
  do {
    cout<<"Inserisci numeratore e denominatore della frazione che vuoi semplificare separandoli con uno spazio \" \": ";
    cin>>num1>>num2;
    if(num1<1 || num2<1) cout<<"\nAlmeno uno dei numeri inseriti e' <0, Riprova!\n";
  } while(num1<1 || num2<1);
  
  n1 = num1;
  n2 = num2;
  
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
  
  n1/=num2;
  n2/=num2;
  
  cout<<n1<<"/"<<n2<<endl;
  system("pause");
}
