#include <bits/stdc++.h>

#define fori(i, n) for(int i = 0; i < n; i++)

using namespace std;

const int maxRow = 4;
const int maxCol = 4;

void ins(int mat[maxRow][maxCol]);
void print(int mat[maxRow][maxCol]);

int main() {
  int m[maxRow][maxCol];
  
  cout<<"\nInserimento matrice ";
  ins(m);
  cout<<"\nMatrice inserita:\n";
  print(m);

  fori(i, maxRow) {
    fori(j, maxCol) {
      if(i > j) {
        int tmp = m[j][i];
        m[j][i] = m[i][j];
        m[i][j] = tmp;
      }
    }
  }
  
  cout<<"\nMatrice trasposta:\n";
  print(m);
}

void ins(int mat[maxRow][maxCol]) {
  fori(i, maxRow) {
    fori(j, maxCol) {
      cout<<"\nInserisci valore in posizione "<<i<<", "<<j<<": ";
      cin>>mat[i][j];
    }
  }
}

void print(int mat[maxRow][maxCol]) {
  fori(i, maxRow) {
    fori(j, maxCol) {
      if(mat[i][j] < 10)  cout<<" ";
      cout<<mat[i][j];
      if(j != maxCol-1)  cout<<", ";
    }
    cout<<"\n";
  }
  cout<<endl;
}
