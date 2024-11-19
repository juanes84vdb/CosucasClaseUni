#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* array = NULL;
    int n, num1,num2,num3,tipo=1;

    printf("Introduce n: ");
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
        scanf("%d", &num1);
        array[i]=num1;
    }
    for(int i=0; i<n; i=i+6)
    {
        if(array[i+5])
        {
            if(tipo%2!=0)
            {
                num1=array[i];
                num2=array[i+1];
                num3=array[i+2];
                array[i]=array[i+5];
                array[i+1]=array[i+4];
                array[i+2]=array[i+3];
                array[i+3]=num1;
                array[i+4]=num2;
                array[i+5]=num3;
                tipo++;
            }
            else{
                num1=array[i+2];
                num2=array[i+1];
                num3=array[i];
                array[i]=array[i+3];
                array[i+1]=array[i+4];
                array[i+2]=array[i+5];
                array[i+3]=num1;
                array[i+4]=num2;
                array[i+5]=num3;
                tipo++;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
