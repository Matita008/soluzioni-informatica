#include <iostream>

using namespace std;

int main() {
  string s, r = "";
  getline(cin,s);
  
  for(int i = 0; i<s.length(); i++) {
    if(s[i] != ' ') r.push_back(s[i]);
  }
  
  cout<<r<<endl;
  system("pause");
};
