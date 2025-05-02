#include <bits/stdc++.h>

#define fori(i, n) for(int i = 0; i < n; i++)

using namespace std;

const int maxRow = 3;
const int maxCol = 3;

void print(int mat[maxRow][maxCol]);

int main() {
  int mat[maxRow][maxCol];
  int n= maxRow*maxCol;
  fori(i, maxRow) {
    fori(j, maxCol) {
      mat[i][j] = n--;
    }
  }
  print(mat);
}

void print(int mat[maxRow][maxCol]) {
  fori(i, maxRow) {
    fori(j, maxCol) {
      cout<<mat[i][j]<<", ";
    }
    cout<<"\n";
  }
  cout<<endl;
}
