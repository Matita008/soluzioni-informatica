#include <iostream>

using namespace std;

int main() {
	int a, b, c;//inizializzo le variabili
	
	cout<<"Inserisci i tre valori  separati da uno spazio \" \"\n";
	cin>>a>>b>>c;
	
	if((a + b) > c && (c + a) > b && (b + c) > a) cout<<a<<", "<<b<<", "<<b<<"\tFormano un triangolo";
	else cout<<a<<", "<<b<<", "<<c<<"\tNon formano un triangolo";
	
	cout<<endl;
	system("pause");
}
