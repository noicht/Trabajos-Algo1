/*
Trabajo Practico N°2 - Alumno: Martin Cabrera

Escribir un programa en lenguaje C que con la siguiente funcionalidad:
1. Permita al usuario ingresar una serie de números reales finalizada en cero.
2. Guardar los números ingresados en un vector.
3. Invertir el vector.
4. Mostrar por pantalla la serie invertida.
Se desconoce la cantidad de datos que se van a ingresar, pero se sabe que son 500 como máximo
(se pueden cargar menos)

*/
#include <stdio.h>
#include <stdlib.h>
#define CANT_DATOS 500

int vec[CANT_DATOS];

void cargarVector(int vec[], int *ML)
{
    int numero;
    int i = 0;

    printf("Ingrese un valor: ");
    scanf("%i", &numero);
    fflush(stdin);

    while (numero != 0 && i < CANT_DATOS)
    {
        vec[i] = numero;
        i++;

        printf("Ingrese un valor: ");
        fflush(stdin);
        scanf("%i", &numero);
        vec[i] = numero;
    }
    *ML = i;
}

void invertirVector(int vec[], int ML)
{
    int menor;
    int mayor;
    int aux;

    for (menor = 0, mayor = ML - 1; menor < mayor; menor++, mayor--)
    {
        aux = vec[menor];
        vec[menor] = vec[mayor];
        vec[mayor] = aux;
    }
}

void printVector(int vec[], int ML)
{
    int i;
    for (i = 0; i < ML; i++)
    {
        printf("%i\t", vec[i]);
    }
}

int main()
{
    int ML;

    int vec[CANT_DATOS];

    cargarVector(vec, &ML);
    invertirVector(vec, ML);
    printVector(vec, ML);

    printf("Terminated");

    return 0;
}
