#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main() {
  srand(time(0));
  srand(rand());//aggiungo casualità a caso
  int num, prec, curr, MAX, i=1;
  
  do{
    cout<<"Numeri da generare: ";
    cin>>num;
    if(num<=0) cout<<"\nInserisci un valore positivo!!\nRiprova\n";
  } while(num <= 0);
  
  MAX = (10 + (num * 0.5))/num;
  
  while(i<=num) {
    curr = rand()%(MAX*i);
    cout<<curr<<"\t";
    if(curr>prec) {
      cout<<curr<<"\n";
      prec = curr;
      i++;
    }
  }
  
  cout<<endl;
	system("pause");
}
