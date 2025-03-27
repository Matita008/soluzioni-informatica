#include <bits/stdc++.h> //no sbvatti con le librerie

using namespace std;

string cifra(string s, int key);
string decifra(string s, int key);

char shift(char c, int pos);

int main() {
  string s;
  int key;
   
  cout<<"Stringa: ";
  getline(cin,s);
  cout<<"Chiave: ";
  cin>>key;
  
  string cifrata = cifra(s, key);
  string decifrata = decifra(cifrata, key);
  
  cout<<"\n\nCifrata: "<<cifrata;
  cout<<"\n\nDecifrata: "<<decifrata;
}

string cifra(string s, int key) {
  
  key = key%25;  //z = 26, a = 1
  if(key == 0) return s; // se la chiave è 0 (o %26==0) non devo cambiare nulla
  for(int i = s.length() - 1; i >= 0; i--) {
    //cout<<s[i]<<" "<<shift(s[i], key)<<" "<<i<<endl;
    s[i] = shift(s[i], key);
  }
  return s;
}

string decifra(string s, int key) {
  return cifra(s, 26 - (key %26));// pk?
}

char shift(char c, int pos) {
  if(!isalpha(c)) return c;
  char s = c + pos;
  if(c <= 'Z' && s > 'Z') s-='Z'-'A';
  else if(s > 'z') s-='z'-'a';
  cout<<c<<" "<<s<<" "<<pos<<endl;
  return s;
}
