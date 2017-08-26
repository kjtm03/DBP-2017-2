// 23 h 56 min 4 s
//Son bisiestos todos los años múltiplos de 4, excepto aquellos que son múltiplos de 100 pero no de 400.
#include <iostream>
using namespace std;
//anio: dias/365(366)
//meses: dias/30
//semanas: dias/7
//1 dia = 23h 56min 4s
//1 hora = 60 min
//1 min = 60 s

int main(){
    int anio,mes,dia;
    int anio2,mes2,dia2;
    int y = 0;
    int x = 0;

    cout<<"Primera Fecha: "<<endl;

    cout<<"Dia: ";cin>>dia;
    while(dia<0 || dia>31){cout<<"Ingrese un Dia valido: ";cin>>dia;}
    cout<<"Mes: ";cin>>mes;
    while(mes<0 || mes>12){cout<<"Ingrese un Mes valido: ";cin>>mes;}
    cout<<"Anio: ";cin>>anio;
    while(anio<0){cout<<"Ingrese un Anio valido: ";cin>>anio;}

    cout<<"Segunda Fecha: "<<endl;

    cout<<"Dia: ";cin>>dia2;
    while(dia2<0 || dia2>31){cout<<"Ingrese un Dia valido: ";cin>>dia2;}
    cout<<"Mes: ";cin>>mes2;
    while(mes2<0 || mes2>12){cout<<"Ingrese un Mes valido: ";cin>>mes2;}
    cout<<"Anio: ";cin>>anio2;
    while(anio2<0){cout<<"Ingrese un Anio valido: ";cin>>anio2;}

    if(anio%4 == 0 && anio%100 != 0 || anio%400 == 0){
        y++;
    }
    if(y==1)cout<<"anio bisiesto"<<endl;
    else cout<<"No es bisiesto ctmr"<<endl;
    if(anio2%4 == 0 && anio2%100 != 0 || anio2%400 == 0){
        x++;
    }
    if(x==1)cout<<"anio bisiesto"<<endl;
    else cout<<"No es bisiesto ctmr"<<endl;

    /*for(int j=2;j<=1000;j++)
    {
        int a=0;
        for(int i=1;i<=1000;i++)
        {
            if(j%i==0)
            a++;
        }
        if(a==2)
        cout<<j<<endl;
    }
    */

}
