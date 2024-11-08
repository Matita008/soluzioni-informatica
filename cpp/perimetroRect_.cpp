#include <iostream>

using namespace std;

int main() {
	int x, y, p, area;//inizializzo le variabili
	
	cout<<"Inserisci i lati del rettangolo separati da uno spazio \" \"\n";
	cin>>x>>y;//leggo i lati
	
	p = (x + y) * 2;//calcolo il perimetro del rettangolo
	area = x * y;	//calcolo l'area del rettangolo
	
	//restituisco
	cout<<"Il perimetro e': "<<p<<"\tL'area e': "<<area;
	
	cout<<endl;
	system("pause");
}
