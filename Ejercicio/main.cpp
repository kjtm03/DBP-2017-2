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
    int x;
    int y = 0;
    cin>>x;
    if(x%4 == 0 && x%100 != 0 || x%400 == 0){
        y++;
    }
    if(y==1)cout<<"anio bisiesto"<<endl;

    for(int j=2;j<=1000;j++)
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
}
