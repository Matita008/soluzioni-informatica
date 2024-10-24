#include <iostream>

using namespace std

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
if(a==0)){
cout<<"il coefficiente di x^2 è nullo(0), pertanto l'equazione è di primo grado\n";//segnalo
int ris=c/b;//risolvo
cout<<"Il risultato è "<<ris<<"\n";//restituisco il risultato
return ris;//termino il programma ritornando il risultato
}
int delta=b*b+(4*a*c);
if(delta<0){//eq. impossibile
cout<<"L'equazione fornita è impossibile poiché delta ("<<delta<<") è negativo\n";
}
else if(delta == 0){//solo un risultato 
int ris=-b/(2*b);//risolvo
cout<<"Il risultato è "<<ris<<"\n";//restituisco il risultato
}
else{//caso normale, 2 risultati distinti
int sq=sqrt(delta);
int ris1=-(b+sq)/(2*a);//risolvo
int ris2=-(b-sq)/(2*a);
cout<<"I risultati sono "<<ris1<<" & "<<ris2<<"\n";//restituisco i risultati
}
}