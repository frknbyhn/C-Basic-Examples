#include <stdio.h>
#include <stdlib.h>
#define SIZE 500
int main()
{

        int array[SIZE],
        i=-1,
        k;

        printf("Arada bir bosluk birakarak degerleri giriniz ve sifira basiniz.\n");

        do
        {
            ++i;
            scanf("%d",&array[i]);
        }
        while(array[i] != 0);

        for(k=0; k<i; ++k)
        printf("%d  ",array[k]);

getch();
return(0);


}
