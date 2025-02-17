#include <iostream>

using namespace std;

int main() {
  string s;
  bool corretto = true;
  getline(cin,s);
  int l=s.length()-1;
  for(int i = 0; i < l/2;i++) {
    if(s[i] != s[l-i]) corretto = false;
  }
  
  if(corretto) cout<<"La stringa inserita e' palindroma";
  else  cout<<"La stringa inserita NON e' palindroma";
  cout<<endl;
  system("pause");
}
