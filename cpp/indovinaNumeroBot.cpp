#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

using namespace std;

int main() {
  srand(time(0));
  int num, min = 0, max = 100;
  char risp;
  do {
    num = (max - min)/2 + min;
    cout<<"Il mio tentativo e' "<<num<<"\nE' corretto? <Grande, Piccolo, Corretto>:\t";
    cin>>risp;
    risp = toupper(risp);
    if(risp == 'P') min = num;
    else if(risp == 'G') max = num;
  } while(risp != 'C');
  cout<<"\n\nHo indovinato!"<<endl;
	system("pause");
}
