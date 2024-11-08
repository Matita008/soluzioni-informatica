#include <iostream>

using namespace std;

int main() {
	int a, b;//inizializzo le variabili
	
	cout<<"Inserisci i due valori separati da uno spazio \" \"\n";
	cin>>a>>b;
	
	if (a < b)       cout<<a<<"E' minore di "<<b;
	else if (a == b) cout<<a<<"E' uguale a "<<b;
	else             cout<<a<<"E' maggiore di "<<b;
	
	cout<<endl;
	system("pause");
}
