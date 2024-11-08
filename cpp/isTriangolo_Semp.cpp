#include <iostream>

using namespace std;

int main() {
	float a, b, c;//inizializzo le variabili
	
	cout<<"Inserisci i tre valori positivi separati da uno spazio \" \"\n";
	cin>>a>>b>>c;
	
	if(a<0 || b<0 || c<0) {
		cout<<"Uno o più valore/i inerito/i e'/sono negativo/i"<<a<<", "<<b<<", "<<c<<endl;
		system("pause");
		return -1;
	}
	if((a + b) > c) 
		if((c + a) > b)
			if((b + c) > a)
				cout<<a<<", "<<b<<", "<<c<<" Formano un triangolo";
			else cout<<a<<", "<<b<<", "<<c<<" Non formano un triangolo";
		else cout<<a<<", "<<b<<", "<<c<<" Non formano un triangolo";
	else cout<<a<<", "<<b<<", "<<c<<" Non formano un triangolo";
	
	cout<<endl;
	system("pause");
}
