#include <iostream>

using namespace std;

int main() {
	int p = 0, d = 1, cur;
  cout<<"Inserisci un numero\n ";
	cin>>cur;
	while(cur != 0) {
    if(cur %2) d*=cur;
    else p+=cur;
    cout<<"\nInserisci un'altro numero\n ";
    cin>>cur;
  }
  cout<<"La somma dei numeri pari e': "<<p<<"\t e il prodotto di quelli dispari e': "<<d;
  cout<<endl;
	system("pause");
}
