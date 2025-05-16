#include <bits/stdc++.h>

#define fori(i, n) for(int i = 0; i < n; i++)

using namespace std;

const int MATERIE = 8;

struct Identificativo {
  string nome;
  string cognome;
  int eta;
};

struct Materia {
  string nome;
  float media;
};

struct Classe {
  unsigned short anno;
  string sezione;
};

struct Studente {
  Identificativo p;
  Classe classe;
  Materia medie[MATERIE];
};

Materia mag(Materia m1, Materia m2) { return m1.media >= m2.media ? m1 : m2; }

void print(Studente stud);

int main() {
  string nome, cognome;
  
  cout<<"Inserisci nome: ";
  getline(cin, nome);
  cout<<"\nInserisci cognome: ";
  cin>>cognome;
  Identificativo id = {nome, cognome, 0};
  cout<<"\nInserisci eta': ";
  cin>>id.eta;
  
  Studente stud;
  stud.p = id;
  
  unsigned short cl;
  string sz;
  cout<<"\nInserisci classe: ";
  cin>>cl;
  cout<<"\nInserisci sezione: ";
  cin>>sz;
  
  stud.classe = {cl, sz};
  
  fori(i, MATERIE) {
    string mat;
    float media;
    
    cout<<"\nInserisci nome materia "<<i<<": ";
    cin>>mat;
    cout<<" Inserisci media di "<<mat<<": ";
    cin>>media;
    
    stud.medie[i] = {mat, media};
  }
  
  Materia magg = stud.medie[0];
  fori(i, MATERIE) {
    magg = mag(magg, stud.medie[i]);
  }
  
  cout<<"\n\nLa materia con la maggior media e' "<< magg.nome<<" con media di "<<magg.media;
  
  cout<<"\n\nRiepilogo studente: ";
  print(stud);
}

void print(Identificativo id) {
  cout<<"\nNome: "<<id.nome;
  cout<<"\t Cognome: "<<id.cognome;
  cout<<"\nDi anni "<<id.eta<<" (approssivativamente nato nel "<<2015-id.eta;
}

void print(Classe cl) {
  cout<<"\nClasse: "<<cl.anno<<cl.sezione;
}

void print(Materia mat) {
  cout<<"\nMateria: "<<mat.nome;
  cout<<"\tMedia: "<<mat.media;
}

void print(Studente stud) {
  cout<<"\nStudente: ";
  print(stud.p);
  cout<<"\nFrequentante la classe: ";
  print(stud.classe);
  cout<<"\nCon valutazioni: ";
  fori(i, MATERIE) print(stud.medie[i]);
}
