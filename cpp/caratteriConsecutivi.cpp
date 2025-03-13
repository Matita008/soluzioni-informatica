#include <iostream>

using namespace std;

int main() {
  string s;
  int max, c = 0;
  char cur = '\0';
  
  getline(cin,s);
  
  for(int i = 0; i<s.length(); i++) {
    if(s[i] == cur) c++;
    else {
      if(max < c) max = c;
      c = 1;
      cur = s[i];
    }
  }
  
  cout<<max<<endl;
  system("pause");
};
