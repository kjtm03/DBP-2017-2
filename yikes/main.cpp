#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

void multi(int a,int b,int c)
{
	int x = (a*b)%c;
	while(x > c){
		x = x%c;
	}
	if(x < 0){
		x = x + c;
	}
	cout<<"\n";
	cout<<a<<" * "<<b<<" mod "<<c<<endl;
	cout<<a*b<<" mod "<<c<<endl;
	cout<<x<<" mod "<<c<<endl;
	cout<<"Resultado: "<<x<<endl;
}
void inverso(int a,int c)
{
	for(int b = 0;b < c;b++){
		int x = (a*b)%c;
        cout<<a<<" * "<<b<<" = "<<a*b<<" mod "<<c<<" = "<< x <<endl;
		if(x < 0){
			x = x + c;
		}
		if(x == 1){
			cout<<"\n";
            cout<<a<<" * "<<a<<"^-1"<<" mod "<<c<<endl;
			cout<<"Resultado: "<<b<<endl;
			break;
		}
		if(b == c-1 && x != 1){cout<<"No existe inverso modular \n";}
	}
}
void expo(int a,int b,int c)
{
    if(b>30){
        //int x =
    }
    int y = pow(a,b);
    int x = y%c;
    cout<<x<<endl;
}
int main()
{
	int a,b,c;
	char tecla;
	system("cls");
	//cout<<pow(2,2)<<endl;
	cout << " \t1 .- Multiplicacion" << endl;
	cout << " \t2 .- Inverso Modular" << endl;
	cout << " \t3 .- Exponenciacion Modular" << endl;
	cout << "                          Elije una opcion: ";
	cin >> tecla;

	switch(tecla)
	{
	case '1':
		system("cls");
		cout<<"Ingrese 2 numeros: "<<endl;
		cin>>a;cin>>b;
		cout<<"Ingrese el modulo: "<<endl;
		cin>>c;
		multi(a,b,c);
		break;

	case '2':
		system("cls");
		cout<<"Ingrese 1 numero: "<<endl;
		cin>>a;
		cout<<"Ingrese el modulo: "<<endl;
		cin>>c;
		inverso(a,c);
		break;

	case '3':
		system("cls");
		cout<<"Ingrese 2 numero: "<<endl;
		cin>>a;cin>>b;
		cout<<"Ingrese el modulo: "<<endl;
		cin>>c;
		expo(a,b,c);
		break;

	default:
		system("cls");
		break;
	}
}
