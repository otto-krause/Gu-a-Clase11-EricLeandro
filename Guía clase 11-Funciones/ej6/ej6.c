#include <stdlib.h>
#include <stdio.h>
void OctavaParte (float n1,float p);
 int main ()
 {

float n1,p;
     OctavaParte(n1,p);
     return 0;
 }
 void OctavaParte(float  num1 , float p)
 {

   printf ("Ingrese un numero ");
   scanf ("%f",&num1);
   p=num1/8;
   system ("cls");
   printf ("La octava parte es %f",p);
   return 0;


 }
