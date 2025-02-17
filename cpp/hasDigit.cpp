#include <iostream>
#include <ctype.h>

using namespace std;

int main() {
  string s;
  bool cont=false;
  
  getline(cin,s);
  
  for(int i =0; i<s.length();i++) {
    if(isdigit(s[i])) cont=true;////perchè isdigit è minuscolo ??????!?!?!??!?
  }
  
  if(cont) cout<<s<<" contiene delle cifre ";
  else cout<<s<<" non contiene cifre";
  
  cout<<endl;
  system("pause");
}
