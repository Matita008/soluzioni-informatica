#include <iostream>

using namespace std;

int main() {
  int max;
  cout<<"Inserisci il numero a cui cercare l'amico: ";
  cin>>max;
  
  for(int n = 1; n < max;n++) {
    int div1 = 0, div2 = 0;
    for(int i = 1; i < n; i++) {
      if(n %i == 0) {
        div1+=i;
      }
    }
    
    if(n == div1)  continue;
    
    for(int i = 1; i < div1; i++) {
      if(div1 %i == 0) {
        div2+=i;
      }
    }
  
    if(div2 == n) {
      cout<<n<<" & "<<div1<<endl;
    }
  }
  cout<<endl;
  system("pause");
}
