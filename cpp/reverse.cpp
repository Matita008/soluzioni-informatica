#include <iostream>

using namespace std;

int main() {
  string s,d="";
  getline(cin,s);
  
  for(int i = s.length()-1; i >= 0;i--) {
    d.push_back(s[i]);
  }
  
  cout<<s<<endl<<d<<endl;
  system("pause");
}
