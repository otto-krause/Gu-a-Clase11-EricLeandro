#include <stdlib.h>
#include <stdio.h>
void PerimetroYarea ();
 int main ()
 {
     int n1,n2;
     PerimetroYarea(n1,n2);
     return 0;
 }
 void PerimetroYarea(int num1,int num2)
 {
     int p=0;
     int r=0;
     printf ("Ingrese un lado del rectangulo\n");
     scanf("%d",&num1);
      printf ("Ingrese el otro lado del rectangulo\n");
     scanf("%d",&num2);
     p=2*num1+2*num2;
     r=num1*num2;
     system ("cls");
     printf("El perimetro es %d",p);
     printf(" el area es %d",r);
 }
