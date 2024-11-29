#include <iostream>

using namespace std;

int main() {
  const int MAX = 25;
  int i = 0, n;
  bool error = false;
  while(i < MAX && !error) {
    cout<<"Prossimo numero: ";
    cin>>n;
    if(i %2) error = n %5;
    else error = n %3;
    cout<<endl;
    i++;
  }
  if(!error) cout<<"\nSi\n\n\n";
  else cout<<"\n\nNO\n\n\n";
  cout<<endl;
  system("pause");
}
