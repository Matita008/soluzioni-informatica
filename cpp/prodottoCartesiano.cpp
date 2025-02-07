#include <iostream>

using namespace std;

int main() {
  const int MAX1 = 3, MAX2 = 6;
  char arr1[MAX1], arr2[MAX2];
  
  cout<<"Inserisci array 1 ("<<MAX1<<" posizioni): ";
  for(int i = 0; i<MAX1; i++) {
    cin>>arr1[i];
  }
  
  cout<<"Inserisci array 2 ("<<MAX2<<" posizioni): ";
  for(int i = 0; i<MAX2; i++) {
    cin>>arr2[i];
  }
  
  for(int i = 0; i<MAX1; i++) {
    for(int j = 0; j<MAX2; j++) {
      cout<<"("<<arr1[i]<<","<<arr2[j]<<") ";
    }
  }
  
  cout<<endl;
  system("pause >nul");
}
