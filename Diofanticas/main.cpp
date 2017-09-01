#include <iostream>

using namespace std;
//5y+3x=4
//y=(4-3x)/5
int main()
{
    for(int x = 0; x<10;x++){
        if(4-3*x % 5 == 0){
            cout<<"("<< x << ", "<<(4-3*x)/5<<")"<<endl;
        }
    }
}
