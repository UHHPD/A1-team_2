#include  <fstream> 
#include <iostream>


int main()
{
std::ifstream fin("daten.txt");
std::ofstream fout("ausgabe.txt");
int a,b,c;

for (int i=1; i < 235; ++i) 
{
  fin >> a;
  fin >> b;
  c = a + b;
  fout << "Variabeln c = " << c << std::endl;
  //std::cout << c << std::endl;
}
fin.close();
fout.close();
}
//std::cout << zahl << std::endl;