#include <bits/stdc++.h>

#define fori(i, n) for(int i = 0; i < n; i++)

using namespace std;

const int maxRow = 3;
const int maxCol = 3;

void ins(int mat[maxRow][maxCol]);
void print(int mat[maxRow][maxCol]);
int sum(int ar[]);
int sum(int mat[maxRow][maxCol], int c);
int sumD1(int mat[maxRow][maxCol]);
int sumD2(int mat[maxRow][maxCol]);

/*
  Main code
*/
int main() {
  int mat[maxRow][maxCol];
  
  ins(mat);
  cout<<"\n\nValori inseriti:\n";
  print(mat);
  
  fori(i, maxRow) {
    cout<<"\nLa somma di riga "<<i + 1<<" e': "<<sum(mat[i]);
  }
  fori(i, maxCol) {
    cout<<"\nLa somma di colonna "<<i + 1<<" e': "<<sum(mat, i);
  }
  cout<<"\nLa somma della prima diagonale e': "<<sumD1(mat);
  cout<<"\nLa somma della seconda diagonale e': "<<sumD2(mat);
}


void ins(int mat[maxRow][maxCol]) {
  fori(i, maxRow) {
    fori(j, maxCol) {
      cout<<"\nInserisci elemento in posizione "<<i<<", "<<j<<": ";
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

int sum(int ar[]) {
  int sum = 0;
  fori(i, maxCol) {
    sum+=ar[i];
  }
  return sum;
}

int sum(int mat[maxRow][maxCol], int c) {
  int sum = 0;
  fori(i, maxRow) {
    sum+=mat[i][c];
  }
  return sum;
}

int sumD1(int mat[maxRow][maxCol]) {
  int sum = 0;
  fori(i, min(maxRow, maxCol)) {
    sum+=mat[i][i];
  }
  return sum;
}

int sumD2(int mat[maxRow][maxCol]) {
  int max = min(maxRow, maxCol);
  int sum = 0;
  fori(i, max) {
    sum+=mat[i][max-i-1];
  }
  return sum;
}
