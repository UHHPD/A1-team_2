#include <fstream>
#include <iostream>
#include <cmath>

void stichprobe()
{
  int a; 
  double mittelwert;
  double summe = 0;
  double varianz = 0;

  std::ifstream fin("datensumme.txt");
  for (int i=0; i< 234; ++i)
  {
    fin >>a ;
    summe += a;
  }
  mittelwert = summe/234;
  fin.close();
  std::ifstream gin("datensumme.txt");
  for (int i=0; i< 234; ++i)
  {
    gin >>a ;
    varianz += (a - mittelwert)*(a - mittelwert);
  }
  varianz = varianz/234;
  gin.close();
  std::cout << sqrt(varianz) << std::endl;
}

int main()
{
  stichprobe();
  int a;
  double mittelwert;
  double summe = 0;
  double varianz = 0;

  std::ifstream fin("datensumme.txt");
  std::ofstream fout("mittelwert.txt");

  for (int i=1; i<=26; ++i)
  {
    for (int j=1; j<=9; ++j)
    {
      fin >>a ;
      summe += a;  
    }
    mittelwert = summe/9;
    summe = 0;
    fout << mittelwert << std::endl;
  }
}
