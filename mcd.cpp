#include <iostream>

using namespace std;

int mcd(int a, int b) {
	int r = 0;
	while (b > 0) {
		r = a%b;
		a = b;
		b = r;
        }
	return a;
}

int main()
{
    int x,y;
    cin>>x;cin>>y;
    cout<<mcd(x,y)<<endl;
}
