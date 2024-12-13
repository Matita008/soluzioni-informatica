#include <iostream>

using namespace std;

int main() {
  int num, cur, somma = 0;
  bool err = false;
  cin>>num;
  for(int i = 0; i < num;) {
    cout<<"Inserisci il "<<++i<<"^ numero: ";
    cin>>cur;
    if(err) continue;
    if(somma != cur) err = true;
    somma+=cur;
  }
  if(err) cout<<"No";
  else cout<<"Si";
  cout<<endl;
  system("pause");
}
