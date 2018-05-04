#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("            ---------------------TEK MI CIFT MI ???---------------------\n");

    printf("Bir sayi giriniz : ");
    scanf("%d", &sayi);

    if (sayi%2==0)
    {
        printf("Sayi cifttir.");
    }

    else
    {
        printf("Sayi tektir.");
    }




    return 0;
}
