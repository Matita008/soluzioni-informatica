#include <iostream>

using namespace std;

int main() {
  const int num = 10;
  
  bool cresc = true;
  int prec;
  
  for(int i = 0; i<num;) {
    int cur;
    cout<<"Inserisci il "<<++i<<" numero: ";
    cin>>cur;
    if(i != 0 && prec >= cur) cresc = false;
    prec = cur;
  }
  cout<<(cresc?"\nLa sequenza e' crescente":"\nLa sequenza non e' crescente")<<endl;
  system("pause");
}
