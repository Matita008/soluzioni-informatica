#include <iostream>

using namespace std;

int main() {
	int a, b, c;//inizializzo le variabili
	
	cout<<"Inserisci i tre valori  separati da uno spazio \" \"\n";
	cin>>a>>b>>c;
	
	if((a + b) < c) 
		if((c + a) < b)
			if((b + c) < a)
				cout<<a<<", "<<b<<", "<<c<<" Formano un triangolo";
			else cout<<a<<", "<<b<<", "<<c<<" Non formano un triangolo";
		else cout<<a<<", "<<b<<", "<<c<<" Non formano un triangolo";
	else cout<<a<<", "<<b<<", "<<c<<" Non formano un triangolo";
	
	cout<<endl;
	system("pause");
}
