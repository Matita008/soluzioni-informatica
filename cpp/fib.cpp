#include <iostream>

using namespace std;

int main() {
  int n, prev = 1, cur = 0;
  cout<<"Quale numero di fibonacci vuoi vedere?";
  cin>>n;
  for(int i=0; i<n; i++) {
    int tmp=cur;
    cur+=prev;
    prev=tmp;
  }
  cout<<cur<<endl;
  system("pause");
}
