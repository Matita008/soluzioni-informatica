#include <iostream>

using namespace std;

int main() {
	int x, y;
	cout<<"Inserisci i lati del rettangolo separati da uno spazio \" \"\n";
	cin>>x>>y;
	cout<<"Il perimetro e': "<<(x + y) * 2<<"\tL'area e': "<<x *y<<endl;
	system("pause");
}
