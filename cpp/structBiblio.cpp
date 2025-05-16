#include <bits/stdc++.h>

#define fori(i, n) for(int i = 0; i < n; i++)

using namespace std;

struct Libro {
  int codice;
  int annoPub;
  string titolo;
  string autore;
};

bool comp(Libro l1, Libro l2) { return l1.annoPub > l2.annoPub; }

const int DIM = 4;

int main() {
  Libro biblioteca[DIM] = {{123, 2000, "E.T.", "Melissa Mathison"},
                           {234, 1692, "Harry Potter", "J. K. Rowling"},
                           {1000, 2025, "History c++", "Present"},
                           {255, 1950, "Guida c++", "cplusplus reference"}};
  sort(biblioteca, biblioteca + DIM, comp);
  while(true) {
    system("cls");
    cout<<"\nOpzioni biblioteca: ";
  }
}
