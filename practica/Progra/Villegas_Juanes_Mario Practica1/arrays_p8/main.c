#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* array = NULL;
    int* array2 = NULL;
    int n, n2, num, sim=0;

    printf("Introduce n del array uno: ");
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
    for(int i=0; i<n; i++)
    {
        printf("Introduce el %d numero: ",i+1);
        scanf("%d", &num);
        array[i]=num;
    }
    printf("Introduce n del array dos: ");
    scanf("%d", &n2);
    if( n<=0 )
    {
        printf("Error\n");
        return 1;
    }

    array2 = (int*)malloc(n2*sizeof(int));
    if( array2==NULL )
    {
        printf("Error\n");
        return 1;
    }
    for(int i=0; i<n2; i++)
    {
        printf("Introduce el %d numero: ",i+1);
        scanf("%d", &num);
        array2[i]=num;
    }
    printf("el array: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\ y el array: ") ;
    for(int i=0; i<n2; i++)
    {
        printf("%d ", array2[i]);
    }
    if (n!=n2)
        printf("no son similares");
    else
    {
        for (int i=0; i<n; i+=2)
        {
            if (array[i+1]){
            if(array[i]+array[i+1]!=array2[i]+array2[i+1])
            {
                sim=0;
                    break;
            }
            else
                sim=1;
            }
            else{
                 if(array[i]!=array2[i])
                sim=0;
            else
                sim=1;
            }
        }
    }
    if (sim && n!=n2)
        printf("son similares");
    else
        printf("no son similares");
    return 0;
}
