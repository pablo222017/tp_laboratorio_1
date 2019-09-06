#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Prototipos.h"
int main()
{
    int num1,num2;
    float resultado;
    double factorA,factorB;
    char opcion;
    printf("        ¡¡¡ Bienvenido a su calculadora !!!    \n");
    printf("                                               \n");
    printf("Para comenzar, ingrese primero los operandos.  \n");
    printf("\nIngrese primer numero: ");
    scanf("%d",&num1);
    printf("\nIngrese segundo numero: ");
    scanf("%d",&num2);
    system("cls");
    printf("\n         ************************************************************");
    printf("\n         *    1.- Suma                      4.- Division            *");
    printf("\n         *                                                          *");
    printf("\n         *    2.- Resta                     5.- Factorial           *");
    printf("\n         *                                                          *");
	printf("\n         *    3.- Multiplicacion            6.- Salir               *");
	printf("\n         ************************************************************");
	printf("\n                   Nota: No es posible dividir por cero              ");
	printf("\n                                                                     ");
	printf("\n                 Los operandos ingresados son: A=%d  y B=%d       \n ",num1,num2);
    while(opcion!='6')
        {
            printf("\nIngrese la opcion correspondiente a la operacion deseada: ");
            fflush(stdin);
            opcion=getchar();
            switch(opcion)
            {
            case '1':
            resultado=sumar(num1,num2);
            printf("\nEl resultado de %d + %d es: %.2f\n",num1,num2,resultado);
            break;
            case '2':
            resultado=restar(num1,num2);
            printf("\nEl resultado de %d - %d es: %.2f\n",num1,num2,resultado);
            break;
            case '3':
            resultado=multiplicar(num1,num2);
            printf("\nEl resultado de %d * %d es: %.2f\n",num1,num2,resultado);
            break;
            case '4':
            if(num1<1 || num2<1)
                {
                    printf("\nNo es posible realizar divisiones por 0.\n");
                }else
                {
                    resultado=dividir(num1,num2);
                    printf("\nEl resultado de %d / %d es: %.2f\n",num1,num2,resultado);
                }
            break;
            case '5':
            factorA=factorizar(num1);
            factorB=factorizar(num2);
            printf("\nEl factorial A!=%d y B!=%d \n",factorA,factorB);
            break;
            default:
            printf("\nUsted eligio salir\n");
            break;
            }
        }

    return 0;
}
