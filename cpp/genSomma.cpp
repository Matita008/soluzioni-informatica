#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() {
  srand(time(0));
  int num1 = rand()%18+1;
  int num2 = rand()%(19-num1)+1;
  int num3 = 20 - (num1+num2);
  cout<<"I 3 numeri generati sono: "<<num1<<", "<<num2<<", "<<num3;
  cout<<endl;
	system("pause");
}
