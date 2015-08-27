#include <iostream>
  int total, contador, num;
  double promedio;
 
  int main()
     {
       total = 0;
       contador = 1;
       while (contador <= 5 )
       {
          std::cout<<"Ingrese un numero: "<< std::endl;
          std::cin >> num;
          total = total + num;
          contador ++;
       }
       promedio = total / 5.0;
       std::cout<<"El promedio es "<< promedio<< std::endl;
       return 0;
  }             
