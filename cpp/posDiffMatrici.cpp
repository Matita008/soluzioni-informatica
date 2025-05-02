#include <bits/stdc++.h>

#define fori(i, n) for(int i = 0; i < n; i++)

using namespace std;

const int maxRow = 2;
const int maxCol = 2;

void ins(int mat[maxRow][maxCol]);
void print(int mat[maxRow][maxCol]);
bool diff(int mat1[maxRow][maxCol], int mat2[maxRow][maxCol], int &x, int &y);

int main() {
  int m[2][maxRow][maxCol];
  
  fori(i, 2) {
    cout<<"\nInserimento matrice "<<i+1<<": ";
    ins(m[i]);
    cout<<"\nMatrice inserita:\n";
    print(m[i]);
  }
  int x, y;
  if(diff(m[0], m[1], x, y)) cout<<"Il primo elemento diverso e' in posizione "<<x<<", "<<y;
  else cout<<"Le due matrici sono uguali";
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

bool diff(int mat1[maxRow][maxCol], int mat2[maxRow][maxCol], int &x, int &y) {
  fori(i, maxRow) {
    fori(j, maxCol) {
      if(mat1[i][j] != mat2[i][j]) {
        x = i;
        y = j;
        return true;
      }
    }
  }
  return false;
}
