#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* array = NULL;
    int n, num;

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
    for(int i=0;i<n;i++) {
        printf("Introduce el %d numero: ",i+1);
        scanf("%d", &num);
        array[i]=num;
    }
    for(int i=0;i<n/2+1;i++) {
        if ((i+1)%2==0){
            num = array[i];
            array[i]=array[n-i];
            array[n-i]=num;
        }
    }
    for(int i=0;i<n;i++) {
        printf("%d",array[i]);
    }

    return 0;
}
