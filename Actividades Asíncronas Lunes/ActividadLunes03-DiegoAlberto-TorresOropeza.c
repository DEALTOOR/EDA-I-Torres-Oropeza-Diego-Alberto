#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main (){
    int opc, opc2, opc3, ret;
    float n1, n2,r;

    system("color 3");
    inicio:
     printf ("----------------------------------\n");
     printf ("Bienvenid@ a mi calculadora :p\n");
     printf ("----------------------------------\n");

     printf ("Ingrese el primer valor:\n");
     scanf ("%f",&n1);
     printf ("Ingrese el segundo valor\n");
     scanf ("%f",&n2);

     printf ("--------------------------------\n");

     printf ("Que desea hacer?:\n");
     printf ("1)Suma\n");
     printf ("2)Resta\n");
     printf ("3)Multiplicacion\n");
     printf ("4)Division\n");
     scanf ("%i",&opc);

     switch (opc)
     {
         case 1:
             r=n1+n2;
             printf ("%f + %f = %f\n", n1, n2, r);
             break;
         case 2:{
            printf ("Como se debe realizar la resta?: 1)n1-n2 o 2)n2-n1\n");
            scanf ("%i",&opc2);
            switch(opc2){
            case 1:{
                r=n1-n2;
                printf("%f - %f = %f\n", n1, n2, r);
                break;}
            case 2:{
                r=n2-n1;
                printf ("%f - %f = %f\n", n2, n1, r);
                break;}
                default:
                    printf ("Introducir datos correctos por favor 7n7\n");
            }
         }
            break;
        case 3:
            r=n1*n2;
            printf ("%f * %f = %f\n", n1, n2, r);
            break;
        case 4:{
            printf ("Como se debe realizar la division?: 1)n1/n2 o 2)n2/n1\n");
            scanf ("%i",&opc3);
            switch(opc3){
            case 1:{
                if(n2==0)
                    printf("Introducir datos validos\n");
                    else{
                r=n1/n2;
                printf ("%f / %f = %f\n", n1, n2, r);}
                break;}
            case 2:{
                if(n1==0)
                    printf("Introducir datos validos\n");
                    else{
                r=n2/n1;
                printf ("%f / %f = %f\n", n2, n1, r);}
                break;}
                default:
                    printf ("Introducir datos correctos por favor 7n7\n");
            }
                }
            break;
            default:
                printf ("Introducir datos correctos por favor 7n7\n");
}
printf("Quieres regresar el programa :p? 1)Sis   2)Non\n");
scanf("%d",&ret);
if (ret==1)
    goto inicio;
}
