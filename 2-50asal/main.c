#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;

    for(i=2; i<50; i++)
        {
        for (j=2; j<i; j++)
    {
        if (i%j == 0)
            break;
    }
    if (i==j)
        printf("asal sayi: %d\n", i);
    }
    return 0;
}
