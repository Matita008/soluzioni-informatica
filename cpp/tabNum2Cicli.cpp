#include <iostream>

using namespace std;

int main() {
  const int MIN = 1, COL = 5, ROW = 6;
  for(int i = MIN; i <= ROW; i++) {
    for(int j = MIN; j <= COL; j++) {
      cout<<i*j<<"\t";
    }
    cout<<endl;
  }
  cout<<endl;
  system("pause");
}
