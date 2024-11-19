#include <iostream>

using namespace std;

int main() {
 int a, b;
 
 cout<<"Inserisci i due estremi positivi in cui generare i numeri separati da uno spazio \" \"\n";
	cin>>a>>b;
 while(a<0||b<0) {
  cout<<"\nAlmeno un numero non e' positivo, riprova!\nInserisci i due estremi in cui generare i numeri separati da uno spazio \" \"\n";
  cin>>a>>b;
 }
 if (!(a %2)) a++;
 if (!(b %2)) b--;
 if (a==b) cout<<a<<"\n\n\nNB: i due estremi inseriti sono identici/contengono solo un valore valido";
  else {
   while (b>=a) {
   cout<<a;
  		if (a%10==1) cout<<endl;
   else cout<<", ";
   a+=2;
   }
  }
  cout<<endl;
 system("pause");
}
