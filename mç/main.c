#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void matrisCarpimi(int birinciMatris[4][4],int ikinciMatris[4][4],int carpimMatris[4][4],int satir1,int sutun1,int satir2,int sutun2)
{
    int i,j,k,toplam=0;
    if(sutun1==satir2) //Matrislerde carpma kosulu.
    {
        for(i=0;i<satir1;i++)
        {
            for(j=0;j<sutun2;j++)
            {
                int toplam=0;
                for(k=0;k<satir2;k++)
                {
                    toplam=toplam+(birinciMatris[i][k]*ikinciMatris[k][j]); //Matris carpimlarinin toplami.
                }
                carpimMatris[i][j]=toplam;
            }
        }
    }
}

int main()
{
    int i,j,birinciMatris[4][4],ikinciMatris[4][4],satir1,sutun1,satir2,sutun2,carpimMatris[4][4];
    printf("Birinci matrisin satir sayisini giriniz: ");
    scanf("%d",&satir1);
    printf("Birinci matrisin sutun sayisini giriniz: ");
    scanf("%d",&sutun1);
    printf("Ikinci matrisin satir sayisini giriniz: ");
    scanf("%d",&satir2);
    printf("Ikinci matrisin sutun sayisini giriniz: ");
    scanf("%d",&sutun2);

    srand(time(NULL));

    if(satir1<=4 && sutun1<=4 && satir2<=4 && sutun2<=4) //Matris boyutu olculmekte.
    {
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                birinciMatris[i][j]=rand()%10;  //Dizilere rastgele degerler atama.
                ikinciMatris[i][j]=rand()%10;
            }
        }
        printf("\n");

        printf("Birinci Matris \n");
        for(i=0;i<satir1;i++)
        {
            for(j=0;j<sutun1;j++)
            {
                printf("%d  ",birinciMatris[i][j]); //Birinci matris gosterimi.
            }
            printf("\n");
        }
        printf("\n");

        printf("Ikinci Matris \n");
        for(i=0;i<satir2;i++)
        {
            for(j=0;j<sutun2;j++)
            {
                printf("%d  ",ikinciMatris[i][j]);  //Ikinci matris gosterimi.
            }
            printf("\n");
        }
        printf("\n");
printf("Matris Carpimi\n");
        matrisCarpimi(birinciMatris,ikinciMatris,carpimMatris,satir1,sutun1,satir2,sutun2);

        for(i=0;i<satir1;i++)
        {
            for(j=0;j<sutun2;j++)
            {
                printf("%d\t",carpimMatris[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
