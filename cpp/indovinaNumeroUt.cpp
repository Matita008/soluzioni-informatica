#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
  const int MAX = 101;
  srand(time(0));
  int in, num = rand() %MAX;
  do {
    cin>>in;
    if(in>num) cout<<"\nTroppo grande, riprova!\n";
    else if(in<num) cout<<"\nTroppo piccolo, riprova!\n";
    else cout<<"\nBrao, hai indovinato il mio numero!\n";
  } while(in != num);
  cout<<num<<endl;
	system("pause");
}
