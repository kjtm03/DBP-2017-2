
#include <iostream>

using namespace std;

int mod(int D, int d) {
	int r = D - ((D / d) * d);
	if (r < 0)
		r += d;
	return r;
}

int MCD_euclides(int a, int b) {
	int r = 0;
	while (b > 0) {
		r = mod(a, b);
		a = b;
		b = r;
	}
	return a;
}

int *MCD_extendido(int a, int b) {
	int *result = new int[3];
	int u1 = 1, v = 1, u = 0, v1 = 0, temp;
	int q = a / b;
	int r = mod(a, b);
	while (r > 0) {
		a = b;
		b = r;
		
		temp = u1;
		u1 = u;
		u = temp - q * u;
		temp = v1;
		v1 = v;
		v = temp - q * v;
		
		q = (a / b);
		r = mod(a, b);
		
		cout << " u " << u << " u1 "<< u1 << " v " << v << " v1 " << v1 << " a " << a << " b " << b << endl;
	}
	
	result[0] = b;
	result[1] = u;
	result[2] = v;
	
	return result;
}


int main()
{
	
	cout << *MCD_extendido(141, 96) << endl;
	
	//system(cls);
	}
