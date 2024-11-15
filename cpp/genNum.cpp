#include <iostream>

using namespace std;

int main() {
	int a, b,i;
	
	cout<<"Inserisci i due estremi in cui generare i numeri separati da uno spazio \" \"\n";
	cin>>a>>b;
	
	cout<<endl;
	
	if (a<b) {
		i = a;
		while (b>i) {
			cout<<i;
			if (i%10==0) cout<<endl;
			else cout<<", ";
			i++;
		}
		cout<<b;
	} else if (a>b) {
		i = b;
		while (a>i) {
			cout<<i;
			if(i%10==0) cout<<endl;
			else cout<<", ";
			i++;
		}
		cout<<a;
	} else cout<<a<<"\n\n\nNB: i due valori inseriti sono identici: "<<a<<", "<<b;
	//cout<<"\n"<<a<<"\t"<<b<<"\t"<<i;//debug
	
	cout<<endl;
	system("pause");
}
