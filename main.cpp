#include <iostream>
#include <cmath>
using namespace std;
long double cosx(long double x, long double eps)
{
    long double res = 1;
    long double frac = 1;
    int zn = -1;
    int mn = 2;
    do{
        frac = (frac)*((x*x)/(mn*(mn-1)));
        mn += 2;
        res = res + zn*frac;
        zn *= -1;     
    }while(frac > eps);
    return res;
}
int main(){
long double x;
int k;
cout << "Введите x = ";
cin >> x;
cout << endl << "Введите k = ";
cin >> k;
long double eps = pow(10, (-k));
cout << endl << cosx(x , eps);
}