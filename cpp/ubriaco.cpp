#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
  int l, tries;//costanti lette dall'utente, l è la lunghezza del lato del quadrato; tries il numero di tentativi da fare
  int n = 0, e = 0, s = 0, o = 0; //Contatori per il numero di volte in cui finisce in una direzione
  int somma = 0;
  srand(time(0));
  cout<<"Inserisci la lunghezza del lato: ";
  cin>>l;
  cout<<"Inserisci il numero di tentativi da effettuare: ";
  cin>>tries;
  for(int i = 0; i < tries; i++) {
    int p = 0;          //contatore per i passi eseguiti dall'ubiaco
    int x = 0, y = 0;   //Coordinate del punto in cui si trova l'ubriaco
    while(true) {
      switch(rand()%4) {
        case 0:
          y++;
          break;
        case 1:
          x++;
          break;
        case 2:
          y--;
          break;
        case 3:
          x--;
          break;
      }
      
      //se è lungo un bordo esco dal ciclo con {break;} dopo aver incrementato il contatore della direzione in cui è arrivato
      if(x == l) {
        e++;
        break;
      } else if(x == -l) {
        o++;
        break;
      } else if(y == l) {
        n++;;
        break;
      } else if(y == -l) {
        s++;
        break;
      } else p++;
    }
    somma+=p;
  }
  cout.precision(4);
  cout<<"\n\nL'ubriaco e' finito "<<n<<" volte a nord("<<n/(float)tries*100<<"%), "<<e<<" volte a est("<<e/(float)tries*100<<"%), ";
  cout<<s<<" volte a sud("<<s/(float)tries*100<<"%), "<<o<<" volte a ovest("<<o/(float)tries*100<<"%)\n";
  cout.precision(10);
  cout<<"Mediamente ci ha messo "<<(int)(somma/(float)tries*100)/100.00<<" passi\n\n";
  system("pause");
}
