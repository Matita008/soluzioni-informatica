#include <bits/stdc++.h>

#define fori(i, n) for(int i = 0; i < n; i++)

using namespace std;

const int maxRow = 4;
const int maxCol = 4;

void ins(bool mat[maxRow][maxCol]);
void print(bool mat[maxRow][maxCol]);
int diff(bool mat1[maxRow][maxCol], bool mat2[maxRow][maxCol]);

int main() {
  bool m[2][maxRow][maxCol];
  
  fori(i, 2) {
    cout<<"\nInserimento matrice "<<i+1<<": ";
    ins(m[i]);
    cout<<"\nMatrice inserita:\n";
    print(m[i]);
  }
  int dif = diff(m[0], m[1]);
  if(dif != 0) cout<<"Le due matrici differiscono di "<<dif<<" punti";
  else cout<<"Le due matrici sono uguali";
}

void ins(bool mat[maxRow][maxCol]) {
  fori(i, maxRow) {
    fori(j, maxCol) {
      cout<<"\nInserisci elemento in posizione "<<i<<", "<<j<<": ";
      cin>>mat[i][j];
    }
  }
}

void print(bool mat[maxRow][maxCol]) {
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

int diff(bool mat1[maxRow][maxCol], bool mat2[maxRow][maxCol]) {
  int diff = 0;
  fori(i, maxRow) {
    fori(j, maxCol) {
      if(mat1[i][j] != mat2[i][j]) diff++;
    }
  }
  return diff;
}
