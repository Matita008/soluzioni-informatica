#include <iostream>

using namespace std;

int main() {
  string s;
  getline(cin,s);
  
  for(int i = 0; i<s.length()/2*2; i++) {
    char t = s[i];
    s[i] = s[i+1];
    s[++i] = t;
  }
  
  cout<<s<<endl;
  system("pause");
}
