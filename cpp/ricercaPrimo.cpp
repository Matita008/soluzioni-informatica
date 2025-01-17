#include <iostream>

using namespace std;

int main() {
  int n, div = 1;
  cin>>n;
  if(n %2 == 0) n++;
  while(div != 0) {
    div = 0;
    for(int i = 3; i * i <= n; i+=2) {
      if(n %i == 0) {
        div = i;
        break;
      }
    }
    n+=2;
  }
  cout<<n-2<<endl;
  system("pause");
}
