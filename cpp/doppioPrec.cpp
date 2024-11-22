#include <iostream>

using namespace std;

int main() {
  float i=0,p=0,c;
  cout<<"Inserisci la sequenza di 10 numeri separando ciascuno con uno spazio ' ': ";
  while(i<10) {
    cin>>c;
    if(p*2==c) cout<<c<<", ";
    i++;
    p=c;
  }
  cout<<endl;
	system("pause");
}
