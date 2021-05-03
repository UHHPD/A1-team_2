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
void mittelwerte()
{
  std::ifstream hin("mittelwerte.txt");
  std::ifstream jin("varianzen.txt");
  double MMW = 0; 
  double MV = 0;
  double b;

  for(int i=0; i<26; ++i)
  {
    hin >> b;
    MMW += b;
  }
  MMW /= 26;
  std::cout << MMW << std::endl;
  for(int j=0; j<26; ++j)
  {
    hin >> b;
    MV += b;
  }
  MV /= 26;
  std::cout << MV << std::endl;
}

int main()
{
  //stichprobe();
  int a;
  double mittelwert;
  double summe = 0;
  double varianz = 0;

  std::ifstream fin("datensumme.txt");
  std::ofstream fout("mittelwerte.txt");
  std::ifstream gin("datensumme.txt");
  std::ofstream gout("varianzen.txt");

  for (int i=1; i<=26; ++i)
  {
    for (int j=1; j<=9; ++j)
    {
      fin >>a ;
      summe += a;   
    }  
    mittelwert = summe/9;
    summe = 0;
    for (int k=1; k<=9; ++k)
    {
      gin >>a ;
      varianz += (a - mittelwert)*(a - mittelwert);
    }
    varianz /= 9; 
    fout << mittelwert << std::endl;
    gout << varianz << std::endl;
    varianz = 0;

  }
  mittelwerte();
}
