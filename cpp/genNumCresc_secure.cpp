#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main() {
  srand(time(0));
  srand(rand());//aggiungo casualità a caso
  int num, prec=0, curr, MAX, i=1;
  
  do{
    cout<<"Numeri da generare: ";
    cin>>num;
    if(num<=0) cout<<"\nInserisci un valore positivo!!\nRiprova\n";
  } while(num <= 0);
  
  MAX = pow(2, sizeof(int) * 8)/num - num;
  cout<<MAX<<endl;
  while(i<=num) {
    curr = rand() %(MAX * i);
    //cout<<"ca: "<<curr<<" ";
    if(curr>prec) {
      cout<<curr<<" ";
      prec = curr;
      i++;
    }
  }
  
  cout<<endl;
	system("pause");
}
