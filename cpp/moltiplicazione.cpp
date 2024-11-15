#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n1, n2, ris = 0;
	cout<<"Inserisci i 2 valori da moltiplicare separati da uno spazio \" \"\n";
	cin>>n1>>n2;
	if(!(n1<0 && n2<0) && (n1<0 || n2<0)) {
		n1 = -abs(n1);
		n2 = abs(n2);
	} else {
		n1 = abs(n1);
		n2 = abs(n2);
	}
	while(n2>0) {
		ris+=n1;
		n2--;
	}
	cout<<endl<<n1<<endl<<n2<<endl<<ris;
	cout<<endl;
	system("pause");
}
