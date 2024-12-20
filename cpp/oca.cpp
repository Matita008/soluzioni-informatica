#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() {
  srand(time(0));
  int pos=0, lanci=0;
  
  while(pos!=90) {
    int lancio = rand()%6 + 1;
    pos+=lancio;
    if(pos%7 == 0) lanci++;
    if(pos%10 == 0 && pos != 90) pos+=lancio;//altrimenti sfora sempre
    if(pos>90) pos-=(pos%90) *2;
    lanci++;
    cout<<lancio<<" posizione: "<<pos<<" lanci: "<<lanci<<endl;//debug
  }
  cout<<"Per raggiungere la fine sono stati necessari "<<lanci<<" lanci";
  cout<<endl;
  system("pause");
}
