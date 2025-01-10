#include <iostream>

using namespace std;

int main() {
  const int SOMMA = 5;
  int c1 = 0, c2 = 0, c3 = SOMMA;
  while(c1 != SOMMA){
    cout<<c1<<c2<<c3<<", ";
    if(c3 == 0) {
        c1++;
        c2 = 0;
        c3 = SOMMA - c1;
    } else {
      c3--;
      c2++;
    }
  }
  cout<<SOMMA<<"00";
  cout<<endl;
  system("pause");
}
