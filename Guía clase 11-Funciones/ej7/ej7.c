#include <stdlib.h>
#include <stdio.h>
void MayorDeDosNumeros ();
 int main ()
 {
     int n1,n2;
     MayorDeDosNumeros ( n1, n2);
     return 0;
 }
 void MayorDeDosNumeros (int num1,int num2)
 {
    printf ("Ingrese un numero ");
    scanf ("%d",&num1);
     printf ("Ingrese otro numero ");
    scanf ("%d",&num2);
    system ("cls");
    if (num1==num2)
    {
        printf ("Son iguales");
    }
    else
    {
        if (num1>num2)
        {
            printf ("El mayor es %d",num1);
        }
        else
{
            printf ("El mayor es %d",num2);
        }
    }
    return 0;
 }
