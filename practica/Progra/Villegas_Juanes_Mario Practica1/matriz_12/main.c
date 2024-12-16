#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define N 20

int main(int argc, char *argv[])
{
    char bandera[N][3*N];
    int i,j;

    for(i=0;i<N/2;i++) {
        for(j=0;j<N/2;j++) {
            if( i==j )
                bandera[i][j] = '+';
            else if( i==j+1 )
                bandera[i][j] = '-';
            else if( i==j-1 )
                bandera[i][j] = '*';
            else if( i<j )
                bandera[i][j] = 'R';
            else if( i>j )
                bandera[i][j] = ' ';
        }
    }

    for(i=N/2;i<N;i++) {
        for(j=0;j<N/2;j++) {
            if( (i-N/2)+j==N/2-1 )
                bandera[i][j] = '+';
            else if( (i-N/2)+j==N/2-1-1 )
                bandera[i][j] = '-';
            else if( (i-N/2)+j==N/2-1+1 )
                bandera[i][j] = '*';
            else if (i>=N-j)
                bandera[i][j] = 'A';
            else
                bandera[i][j] = ' ';
        }
    }

    for(i=0;i<N;i++) {
        for(j=N/2;j<3*N;j++) {
            if( i==N/2-1 || i==N/2 )
                bandera[i][j] = '+';
            else if( i==N/2-2 || i==N/2+1 )
                bandera[i][j] = '*';
            else if (j>=N/2 && i<N/2)
                bandera[i][j] = 'R';
            else
                bandera[i][j] = 'A';
        }
    }

    for(i=0;i<N;i++) {
        for(j=0;j<3*N;j++) {
            printf("%c", bandera[i][j]);
        }
        printf("\n");
    }

    return 0;
}



