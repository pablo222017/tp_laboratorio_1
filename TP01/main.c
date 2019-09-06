#include <stdio.h>
#include <stdlib.h>
#include "Prototipos.h"

int main()
{
    float num1,num2,resultado;
    double factorA,factorB;
    char opcion;
    printf("Para comenzar, ingrese primero los operandos.  \n");
    printf("\nIngrese primer numero: ");
    scanf("%f",&num1);
    printf("\nIngrese segundo numero: ");
    scanf("%f",&num2);
	system("cls");
	menu();
	printf("\nLos operandos ingresados son: A=%.3f  y B=%.3f   \n ",num1,num2);
    do
        {
            printf("\nIngrese la opcion correspondiente a la operacion deseada: ");
            fflush(stdin);
            opcion=getchar();
            switch(opcion)
            {
            case '1':
            resultado=sumar(num1,num2);
            printf("\nEl resultado de A+B es: %.3f\n",resultado);
            break;
            case '2':
            resultado=restar(num1,num2);
            printf("\nEl resultado de A-B es: %.3f\n",resultado);
            break;
            case '3':
            resultado=multiplicar(num1,num2);
            printf("\nEl resultado de A*B es: %.3f\n",resultado);
            break;
            case '4':
            if(num1<1 || num2<1)
                {
                    printf("\nNo es posible realizar divisiones por 0.\n");
                }else
                {
                    resultado=dividir(num1,num2);
                    printf("\nEl resultado de A/B es: %.3f\n",resultado);
                }
            break;
            case '5':
            factorA=factorizar(num1);
            factorB=factorizar(num2);
            printf("\nEl factorial de A!=%e\nEl factorial de B!=%e\n",factorA,factorB);
            break;
            case '6':
            printf("\nUsted eligio salir");
            break;
            default:
            printf("\nElija una opcion valida\n");
            break;
            }
        }while(opcion!='6');
    return 0;
}
