
#include<iostream>


using namespace std;

int main()
{
     cout<<"Multiplicador" << "\n";
     int a;
     int b;
     int counter = 0;
     int c = 0;
     cout<<"Ingresa el primer factor :";
     cin>>a;
     cout<<"Ingresa el segundo factor :";
     cin>>b;
     do
     {
         c = c + a ;
         counter = counter + 1;
     }while( counter < b);
     cout<< "El resultado es: " << c << "\n" ;
     return 0;
 }
