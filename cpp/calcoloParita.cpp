#include <iostream>

using namespace std;

int main() {
  const int LEN = 8;
  bool arr[LEN];
  bool work;
  
  cout<<"Inserisci bits ("<<LEN-1<<" posizioni) [0-1]: ";
  for(int i = 0; i<LEN-1; i++) {
    int n;
    cin>>n;
    arr[i]= (n!=0);
  }
  
  work = arr[0];
  for(int i = 1; i<LEN; i++) {
    bool cur = arr[i];
    work = (work || cur) && !(work == cur);
  }
  arr[LEN-1] = work;
  
  for(int i = 0; i<LEN; i++) {
    cout<<arr[i]<<" ";
  }
  
  cout<<endl;
  system("pause");
}
