#include <iostream>

using namespace std;

int fib(int m, int n) {
  int r = m%n;
  if(r == 0) return n;
  return fib(n,r);
}

int main() {
  int num1, num2;
  do {
    cout<<"Inserisci i due valori di cui vuoi trovare l'MCD separandoli con uno spazio \" \": ";
    cin>>num1>>num2;
    if(num1<1 || num2<1) cout<<"\nUno dei numeri inseriti e' <0, Riprova!\n";
  } while(num1<1 || num2<1);

  if(num1<num2) {
    int tmp = num1;
  	num1 = num2;
  	num2 = tmp;
  }
  
  cout<<fib(num1,num2);
  cout<<endl;
  system("pause");
}
