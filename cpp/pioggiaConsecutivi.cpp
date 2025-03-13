#include <iostream>

using namespace std;

int main() {
  string s;
  int max, c = 0;
  
  getline(cin,s);
  
  for(int i = 0; i<s.length(); i++) {
    if(s[i] == 'P') c++;
    else {
      if(max < c) max = c;
      c = 0;
    }
  }
  
  cout<<max<<endl;
  system("pause");
};
