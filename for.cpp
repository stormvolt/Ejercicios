
#include<iostream>


using namespace std;

int main()
{
     cout<<"Calculadora de potencias" << "\n";
     int a;
     int b;
     int c = 1;
     cout<<"Ingresa la base:";
     cin>>a;
     cout<<"Ingresa el exponente :";
     cin>>b;
     for (int counter = 1; counter <= b; counter++)
     {
         c = c * a;
     }
     cout<< "El resultado es: " << c << "\n" ;
     return 0;
 }
