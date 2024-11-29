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
  
  MAX = pow(2, (sizeof(int) - 1) * 8)/num;
  //cout<<MAX<<endl;
  while(i<=num) {
    curr = rand() %MAX + prec;
    //cout<<"ca: "<<curr<<" ";
      cout<<curr;
      if(i%5) cout<<", ";
      else cout<<endl;
      prec = curr;
      i++;
  }
  
  cout<<endl;
	system("pause");
}
