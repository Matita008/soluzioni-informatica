#include <iostream>

using namespace std;

int main() {
  string s, r;
  string a[2] = {"", ""};
  getline(cin,s);
  
  for(int i = 0; i<s.length(); i++) {
    a[i%2].push_back(s[i]);
  }
  
  r = a[0]+a[1];
  cout<<r<<endl;
  system("pause");
}
