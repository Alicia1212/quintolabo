#include "iostream"
#include "math.h"
using namespace std;

int mcd(int x , int y){
  int t;
  x = (x < 0) ? -x:x;
  y = (y < 0) ? -y:y;
  t = (x < y) ? x : y;
  while ( (x % t) || (y % t))
    --t;
  return t;
}

int main()
{
  int x,y;
  cout << "Ingrese su primer entero: ";
  cin >> x;
  cout << "Ingrese su segundo entero: ";
  cin >> y;  
  cout << "El Maximo comun divisor es (Euclides): "<< endl << mcd(x,y) << endl;

}