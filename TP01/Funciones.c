#include <stdio.h>
float sumar(float a,float b)
{
    float resultado;
    resultado=a+b;
    return resultado;
}
float restar(float a,float b)
{
    float resultado;
    resultado=a-b;
    return resultado;
}
float multiplicar(float a,float b)
{
    float resultado;
    resultado=a*b;
    return resultado;
}
float dividir(float a,float b)
{
    float resultado;
    resultado=a/b;
    return resultado;
}
double factorizar(double numFactorial)
{
    double resultadoFactorial;
    int numero=0;
    while (numero>0)
        {
        resultadoFactorial=(double)numFactorial*numero;
        numero--;
        }
    return resultadoFactorial;
}
