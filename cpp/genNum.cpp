#include <iostream>

using namespace std;

int main() {
	int a, b;
	
	cout<<"Inserisci i due estremi in cui generare i numeri separati da uno spazio \" \"\n";
	cin>>a>>b;
	
	cout<<endl;
	
	if (a>b)  {
	  int c=a;
	  a = b;
	  b = c;
  }
  if(a==b) cout<<a<<"\n\n\nNB: i due valori inseriti sono identici: "<<a<<", "<<b;
  else {
  	while (b>a) {
  		cout<<a;
  		if (a%10==0) cout<<endl;
  		else cout<<", ";
  		a++;
	  }
		cout<<b;
	}
	//cout<<"\n"<<a<<"\t"<<b<<"\t"<<i;//debug
	
	cout<<endl;
	system("pause");
}
