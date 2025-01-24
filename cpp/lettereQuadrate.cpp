#include <iostream>

using namespace std;

int main() {//'A' = 65
  int n; 
  cout<<"Numero: ";
  cin>>n;
  for(int i = 0; i<n; i++) {
    char c = 'A' + i;
    for(int x = 0; x <= i; x++) {
      for(int x = 0; x <= i; x++) {
        cout<<c;
      }
      cout<<endl;
    }
    cout<<endl;
  }
  system("pause");
}
