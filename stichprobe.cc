#include <fstream>
#include <iostream>
#include <cmath>

int main()
{
  double a, mittelwert;
  double summe = 0;
  double varianz = 0;

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
  std::cout << mittelwert << std::endl;
  std::cout << varianz << std::endl;
  std::cout << sqrt(varianz) << std::endl;
  
}