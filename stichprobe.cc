#include <fstream>
#include <iostream>
#include <cmath>

int main()
{
  float a, mittelwert;
  float summe = 0;
  float varianz = 0;

  std::ifstream fin("datensumme.txt");
  for (int i=0; i<= 234; ++i)
  {
    fin >>a ;
    summe += a;
  }
  mittelwert = summe/234;
  fin.close();
  std::ifstream gin("datensumme.txt");
  for (int i=0; i<= 234; ++i)
  {
    gin >>a ;
    varianz += (a - mittelwert)*(a - mittelwert);
  }
  varianz = varianz/234;
  gin.close();
  std::cout << sqrt(varianz) << std::endl;
  
}