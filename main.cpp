#include <iostream>
#include <cmath>
using namespace std;
long long int factorial(int i)
{
  if (i==0) 
    return 1;
  else 
    return i*factorial(i-1);
}
long double cosx(long double x, long double eps)
{
    long double res = 1;
    long double frac;
    int zn = -1;
    int mn = 2;
    do{
        frac = (pow(x,mn))/(factorial(mn));
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