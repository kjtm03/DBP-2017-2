#include <iostream>
using namespace std;

int euc(int x,int y){
  return (!y) ? x : euc(y,x%y);
}
int main()
{
  int x,y;
  cout << "x: ";
  cin >> x;
  cout << "y: ";
  cin >> y;
  cout << "MCD (euclides): " << euc(x,y) << endl;
}
