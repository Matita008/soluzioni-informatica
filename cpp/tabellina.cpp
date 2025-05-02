#include <bits/stdc++.h>

#define fori(i, n) for(int i = 0; i < n; i++)

using namespace std;

const int maxRow = 10;
const int maxCol = 10;

void print(int mat[maxRow][maxCol]);

int main() {
  int mat[maxRow][maxCol];
  fori(i, maxRow) {
    fori(j, maxCol) {
      mat[i][j] = (i+1) * (j+1);
    }
  }
  print(mat);
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
