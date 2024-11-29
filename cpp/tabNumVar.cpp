#include <iostream>

using namespace std;

int main() {
  const int MIN = 1, MAX = 6, END = 5, MAXEND = MAX * END;
  int i = MIN, k = i;
  while(i < MAXEND) {
    cout<<i;
    if(i != END * k) cout<<",\t";
    else {
      cout<<endl;
      k++;
      i=0;
    }
    i+=k;
  }
  cout<<i;
  cout<<endl;
  system("pause");
}
