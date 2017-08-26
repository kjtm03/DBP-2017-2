// 23 h 56 min 4 s
//Nota: Son bisiestos todos los años múltiplos de 4, excepto aquellos que son múltiplos de 100 pero no de 400.
include<iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x;
    if(x%4==0 && x%100 != 0 || x%400 == 0){
        y++;
    }
    if(y=2)cout<<x<<endl;
}
