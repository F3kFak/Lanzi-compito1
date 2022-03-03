/*
Scrivere un programma che stampi "n" volte la stringa "Bada come la fuma"  con "n" dato in input dall'utente.

Guido Lanzi 3 Marzo 2022
*/

# include <iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Quante volte voi stampare la frase? ";
  cin>>n;
  for(int i = 0; i < n; i++)
  {
    cout<<"Bada come la fuma"<<endl; 
  }
  system("pause");
}
