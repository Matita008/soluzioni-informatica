#include <iostream>

using namespace std;

int main() {
	int a, b;//inizializzo le variabili
	
	cout<<"Inserisci i due valori da scambiare separati da uno spazio \" \"\n";
	cin>>a>>b;
	
	/*
	Per poter scambiare i due valori ho bisogno di avere una terza variabile temporanea (tmp)
	in cui salvare 'a'
	*/
	int tmp = a;
	a = b;
	b = tmp;
	
	//restituisco le due variabili
	cout<<"Il primo valore e': "<<a<<"\te il secondo valore e': "<<b;
	
	cout<<endl;
	system("pause");
}
