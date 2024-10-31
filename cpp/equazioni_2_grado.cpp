#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int a,b,c;//inizializzo 3 variabili (a,b,c) per memorizzare i coefficienti di un equazione ax^2+bc+c=0
	//Chiedo e leggo i rispettivi coefficienti
	cout<<"Inserisci il coefficiente di x^2\n";
	cin>>a;
	cout<<"\nInserisci il coefficiente di x\n";
	cin>>b;
	cout<<"\nInserisci il termine noto\n";
	cin>>c;
	// non è un'equazione di secondo grado, segnalo e risolvo
	if(a==0){
		cout<<"il coefficiente di x^2 e' nullo(0), pertanto l'equazione e' di primo grado\n";//segnalo
		int ris=c/b;//risolvo.
		cout<<"Il risultato e' "<<ris<<"\n";//restituisco il risultato
		cin>>a;
		return ris;//termino il programma ritornando il risultato
	}
	int delta=b*b-(4*a*c);
	if(delta<0){//eq. impossibile
		cout<<"L'equazione fornita e' impossibile poiche' delta ("<<delta<<") e' negativo\n";
	} else if(delta == 0){//solo un risultato 
		int ris=-b/(2*b);//risolvo
		cout<<"Il risultato e' "<<ris<<"\n";//restituisco il risultato
	} else{//caso normale, 2 risultati distinti
		int sq=sqrt(delta);
		int ris1=-(b+sq)/(2*a);//risolvo
		int ris2=-(b-sq)/(2*a);
		cout<<"I risultati sono "<<ris1<<" & "<<ris2<<"\n";//restituisco i risultati
	}
	cout<<"premi un tasto per uscire";
	cin>>a;
	return a;
}
