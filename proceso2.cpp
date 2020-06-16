#include "iostream"
#include "time.h"

using namespace std;
int main(void){
  int h;
  int m;
  int s;
  char a;
  cout<< "introduzca la hora: "<<endl;
  cin>> h >> a >> m >> a >> s;
  s = s + 1;
  if (s>=60){
    s = 0;
    m = m + 1;
    if (m>=60){
      m = 0;
      h = h + 1;
      if (h>=24){
        h = 0;

      }
    }

  }
  cout<< "Su hora actual es: "<<endl;
  cout<< h << ":" << m << ":" << s;
    
  return 0;
}
