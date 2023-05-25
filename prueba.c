#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int n;
    printf("ingrese el tamaño del array\n");
    scanf("%d", &n);
    int *A = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        A[i] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}