#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funciones.h"

/** \brief todo el desarrollo del programa.
 *
 * \return void
 *
 */
void hacerCalculo()
{
    int t;
    int x;
    int y;
    int w;
    int A;
    int B;
    int opcion;
    int resultadoSuma;
    int resultadoResta;
    float resultadoDivision;
    int resultadoMultiplicacion;
    long factorial1;
    long factorial2;



    x=0;
    y=0;
    t=1;
    w=0;



    do
    {
        printf("----CALCULADORA----\n\n");

        if(x==1)
        {
            printf("1. Ingresar primer operando(A=%d)\n",A);
        }
        else
        {
            printf("1. Ingresar primer operando(A=x)\n");
        }
        if(y==1)
        {
            printf("2. Ingresar segundo operando(B=%d)\n",B);
        }
        else
        {
            printf("2. Ingresar segundo operando(B=y)\n");
        }

        printf("3. Calcular operaciones\n");
        printf("4. Informar resultados\n");
        printf("5. Salir\n\n\n");

        printf("ingrese una opcion del menu\n");
        scanf("%d", &opcion);



        switch(opcion)
        {
            case 1:

                A=pedirNumero("Ingrese primer operando:\n");
                x=1;
                system("cls");
                break;
            case 2:
                B=pedirNumero("Ingrese segundo operando:\n");
                y=1;
                system("cls");
                break;
            case 3:
                if(x==1 && y==1)
                {
                    printf("..................\n");
                    printf("...Calculando.....\n");
                    printf("..................\n");

                    resultadoSuma=sumar(A,B);
                    resultadoResta=restar(A,B);
                    resultadoDivision=division(A,B);
                    resultadoMultiplicacion=multiplicar(A,B);
                    factorial1=factorial(A);
                    factorial2=factorial(B);

                    w=1;

                    system("pause");
                    system("cls");
                }
                else
                {
                    printf("\nerror, no se puede realizar la operacion sin sus operandos\n");

                    system("pause");
                    system("cls");

                }
                break;

            case 4:

                if(x==1 && y==1 && w==1 )
                {
                printf("El resultado de A+B es: %d\n", resultadoSuma);
                printf("El resultado de A-B es: %d\n", resultadoResta);
                    if(B==0)
                    {
                        printf("No se pudo realizar la division\n");
                    }
                    else
                    {
                        printf("El resultado de A/B es: %.2f\n", resultadoDivision);
                    }

                    printf("El resultado de A*B es: %d\n", resultadoMultiplicacion);

                    if(A<0)
                    {
                        printf("No es posible calcular el factorial de numeros negativos\n");
                    }
                    else if(A==0)
                    {
                        factorial1=1;
                        printf("El factorial de A es: %ld\n",factorial1);
                    }
                    else
                    {
                        printf("El factorial de A es: %ld\n",factorial1);
                    }

                    if(B<0)
                    {
                        printf("No es posible calcular el factorial de numeros negativos\n");


                    }
                    else if(B==0)
                    {

                        factorial2=1;
                        printf("El factorial de B es: %ld\n",factorial2);
                    }
                    else
                    {

                        printf("El factorial de B es %ld\n",factorial2);
                    }

                }
                else
                {
                    printf("\nerror, falta operar\n");

                }



                system("pause");
                system("cls");


                break;

            case 5:
                system("cls");
                printf("\n\nUsted finaliza el programa\n");
                system("pause");

                t=0;
                break;

            default:
            {
                printf("error, ingrese opcion valida\n");

                system("pause");

                system("cls");
                break;
            }


        }



    }while(t!=0);


}


/** \brief pide numeros enteros.
 *
 * \param char* mensaje para que el usuario ingrese dato.
 * \return int retorna numeros enteros.
 *
 */
int pedirNumero(char *mensaje)
{
    int A;
    printf(mensaje);
    scanf("%d",&A);
    return A;
}




/** \brief calcula la suma
 *
 * \param int recibe un operando
 * \param int recibe otro operando
 * \return int retorna la suma
 *
 */
int sumar(int A, int B)

{
    int resultado;

    resultado=A+B;

    return resultado;


}

/** \brief calcula la resta
 *
 * \param int recibe un operando
 * \param int recibe otro operando
 * \return int retorna la resta
 *
 */
int restar(int A,int B)
{
    float resultado;

    resultado=A-B;

    return resultado;
}

/** \brief calcula la division
 *
 * \param int recibe un operando
 * \param int recibe otro operando
 * \return float retorna el cociente de la division
 *
 */
float division(int A, int B)
{
    float resultado;


    resultado=(float) A/B;

    return resultado;
}

/** \brief calcula la multiplicacion
 *
 * \param int recibe un operando
 * \param int recibe otro operando
 * \return int retorna el producto de la multiplicacion
 *
 */
int multiplicar(int A,int B)
{
    int resultado;

    resultado=A*B;

    return resultado;
}

/** \brief calcula el factorial
 *
 * \param int recibe un numero
 * \return int retorna el factorial del numero
 *
 */
long int factorial(int A)
{
    long int factorial=1;
    int f;

    for(f=A; f>=1; f--)
    {
        factorial=factorial*f;
    }

    return factorial;
}



