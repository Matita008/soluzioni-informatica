#include <iostream>

using namespace std;

int main() {
	int min,max,cur, i = 0;
  cout<<"Inserisci un numero\n ";
	cin>>cur;
	min=max=cur;
	while(i<10) {
    cout<<"\nInserisci un'altro numero\n ";
    cin>>cur;
    if(min>cur)  min=cur;
    if(max<cur)  max=cur;
    i++;
  }
  cout<<"Il minore e': "<<min<<"\t e il maggiore e'"<<max;
  cout<<endl;
	system("pause");
}
