#include <iostream>

using namespace std;

int main() {
  const int MIN = 1, MAX = 40, END = 5;
  int i = MIN;
  while(i < MAX) {
    cout<<"\t"<<i;
    if(!(i%END)) cout<<endl;
    i++;
  }
  cout<<"\t"<<i;
  cout<<endl;
  system("pause");
}
