#include <stdlib.h>
#include <stdio.h>
void NumerosEnPantalla ();
 int main ()
 {
     int n1,n2;
     NumerosEnPantalla(n1,n2);
     return 0;
 }
 void NumerosEnPantalla(int num1,int num2)
 {

     printf ("Ingrese un numero\n");
     scanf("%d",&num1);
      printf ("Ingrese otro numero\n");
     scanf("%d",&num2);
     system ("cls");
     printf ("Los numeros ingresados son \n%d  \n%d",num1,num2);

 }
