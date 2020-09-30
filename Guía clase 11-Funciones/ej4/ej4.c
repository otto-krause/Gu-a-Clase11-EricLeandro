#include <stdlib.h>
#include <stdio.h>
void FuerzaYsuperficie (float n1,float n2);
 int main ()
 {
     float n1,n2;
     FuerzaYsuperficie( n1, n2);
     return 0;
 }
 void FuerzaYsuperficie (float num1,float num2)
 {
     float p=0;

    printf ("Ingrese la fuerza ");
    scanf ("%f",&num1);
    printf ("Ingrese la superficie ");
    scanf ("%f",&num2);
    p=num1/num2;
    system ("cls");
    printf ("La presion es %2.f",p);
 }

