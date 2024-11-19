#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* array = NULL;
    int n, num, lim, mult,sum=0,cont;

    printf("Introduce el tamaño del array: ");
    scanf("%d", &n);
    if( n<=0 )
    {
        printf("Error\n");
        return 1;
    }

    array = (int*)malloc(n*sizeof(int));
    if( array==NULL )
    {
        printf("Error\n");
        return 1;
    }

    printf("Introduce el limete de la suma: ");
    scanf("%d", &lim);
    printf("Introduce el numero para multiplicar: ");
    scanf("%d", &mult);

    for(int i=0; i<n; i++)
    {
        printf("Introduce el %d numero: ",i+1);
        scanf("%d", &num);
        array[i]=num;
    }
    for(int i=0; i<n; i++)
    {
        sum=sum+array[i];
        if(sum>lim)
            break;
        else
            num=i;
    }
     for(int i=0; i<=num; i++)
    {
        array[i]*=mult;
    }
     for(int i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
