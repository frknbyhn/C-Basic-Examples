#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 5 öğrencinin not ortalamasını alan geçenleri dosyaya yazdıran c programı

    int vize1,vize2,vize3,vize4,vize5;
    int final1,final2,final3,final4,final5;
    int ort1,ort2,ort3,ort4,ort5;
    
	printf("1.Ogrencinin vize notunu giriniz : ");
    scanf("%d",&vize1);
    printf("2.Ogrencinin vize notunu giriniz : ");
    scanf("%d",&vize2);
    printf("3.Ogrencinin vize notunu giriniz : ");
    scanf("%d",&vize3);
    printf("4.Ogrencinin vize notunu giriniz : ");
    scanf("%d",&vize4);
    printf("5.Ogrencinin vize notunu giriniz : ");
    scanf("%d",&vize5);
    printf("1.Ogrencinin final notunu giriniz : ");
    scanf("%d",&final1);
    printf("2.Ogrencinin final notunu giriniz : ");
    scanf("%d",&final2);
    printf("3.Ogrencinin final notunu giriniz : ");
    scanf("%d",&final3);
    printf("4.Ogrencinin final notunu giriniz : ");
    scanf("%d",&final4);
    printf("5.Ogrencinin final notunu giriniz : ");
    scanf("%d",&final5);


    ort1=(vize1+final1)/2;
    ort2=(vize2+final2)/2;
    ort3=(vize3+final3)/2;
    ort4=(vize4+final4)/2;
    ort5=(vize5+final5)/2;


    if(ort1>=85)
    {
        printf(dosya,"1 nolu ogrencinin vize notu : %d,final notu : %d, ortalaması: %d\n85 üzerinden %d alarak geçti.\n",vize1,final1,ort1,ort1);

    }
    if(ort2>=85)
    {
        printf(dosya,"2 nolu ogrencinin vize notu : %d,final notu : %d, ortalaması: %d\n85 üzerinden %d alarak geçti.\n",vize2,final2,ort2,ort2);

    }
    if(ort3>=85)
    {
        printf(dosya,"3 nolu ogrencinin vize notu : %d,final notu : %d, ortalaması: %d\n85 üzerinden %d alarak geçti.\n",vize3,final3,ort3,ort3);

    }
    if(ort4>=85)
    {
        printf(dosya,"4 nolu ogrencinin vize notu : %d,final notu : %d, ortalaması: %d\n85 üzerinden %d alarak geçti.\n",vize4,final4,ort4,ort4);

    }
    if(ort5>=85)
    {
        printf(dosya,"5 nolu ogrencinin vize notu : %d,final notu : %d, ortalaması: %d\n85 üzerinden %d alarak geçti.",vize5,final5,ort5,ort5);

    }






}
