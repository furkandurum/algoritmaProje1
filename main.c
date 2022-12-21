#include<stdio.h>
int options(void);
void AK(void);
void AS(void);
void YZ(void);
void BG(void);
void urunbak(void);
void urunsec(void);
int fiyatg(void);
float dp(int);
float f1(int);
float f2(int);
float f3(int);
float f4(int);
int f=0; 
float toplam=0;
int matrix[4][4];
int main()
{
    int a;
    FILE * file=fopen("Check.txt","w");
    printf("******************--- ABC ELEKTRONIK ---******************\n");
    printf("--------------------- Hosgeldiniz    ---------------------\n");
    do
    {
       printf("**********************************************************\n");
       printf("1-Urun ve fiyat sorgula\n");
       printf("2-sepete urun ekle\n");
       printf("3-siparisi tamamla\n");
       printf("4-sonlandir\n");
       printf("**********************************************************\n");
       printf("Seciniz: ");
       scanf("%d",&a);
       switch (a)
       {
       case 1: urunbak();break;
       case 2: urunsec();break;
       case 3: f=fiyatg();
                   if (f==1) goto cikis;
       break;
       case 4: cikis:
           for (int i=0; i<4; i++)
            for (int j=0; j<4; j++)
             if (matrix[i][j]>0)
           {
               fprintf(file,"\n\n\n\n\n\n\n---------------------------- Aldığınız Ürünler ------------------------------\n");
               switch(i)
               {
               case 0://printf("%d- Akilli telefon x%d",j+1,matrix[i][j]);
                           switch(j)
                          {
                              case 0:fprintf(file,"************ Akilli telefon Samsung SS29 x%d     %.2fTL************\n",matrix[i][j],matrix[i][j]*1500.0); break;
                              case 1:fprintf(file,"************ Akilli telefon Iphone 2 x%d     %.2fTL************\n",matrix[i][j],matrix[i][j]*2750.0); break;
                              case 2:fprintf(file,"************ Akilli telefon Redmi 12 x%d     %.2fTL************\n",matrix[i][j],matrix[i][j]*8832.0);

                          }
                 break;
               case 1://printf("%d- Akilli saat x%d",j+1,matrix[i][j]);

                                                switch(j)
                          {
                              case 0:fprintf(file,"************ Akilli saat Iphone x%d     %.2fTL************\n",matrix[i][j],matrix[i][j]*543.99); break;
                              case 1:fprintf(file,"************ Akilli saat Xaomi x%d     %.2fTL************\n",matrix[i][j],matrix[i][j]*1324.50); break;
                              case 2:fprintf(file,"************ Akilli saat Terra x%d     %.2fTL************\n",matrix[i][j],matrix[i][j]*850.0);

                          }
                 break;
               case 2:fprintf(file,"************ Yazici ");
                          switch(j)
                          {
                              case 0:fprintf(file,"A x%d     %.2fTL************\n",matrix[i][j],matrix[i][j]*543.99); break;
                              case 1:fprintf(file,"B x%d     %.2fTL************\n",matrix[i][j],matrix[i][j]*848.20); break;
                              case 2:fprintf(file,"C x%d     %.2fTL************\n",matrix[i][j],matrix[i][j]*1433.33);
                          }
                 break;
               case 3:
                         switch(j)
                          {
                              case 0:fprintf(file," ************Bilgisayar X x%d     %.2fTL************\n",matrix[i][j],matrix[i][j]*14600.0); break;
                              case 1:fprintf(file," ************Bilgisayar Y x%d     %.2fTL************\n",matrix[i][j],matrix[i][j]*12964.0); break;
                              case 2:fprintf(file," ************Bilgisayar Z x%d     %.2fTL************\n",matrix[i][j],matrix[i][j]*22920.0); break;
                              case 3:fprintf(file," ************Bilgisayar Q x%d     %.2fTL************\n",matrix[i][j],matrix[i][j]*36123.0);

                          }
               }


           }
           fprintf(file," ************************ Toplam Ücreti=%.2fTL************\n",toplam);
           fprintf(file," ************************ Sizi yine bekliyoruz ************");
           fclose(file);
           printf("Fişinizi almak için Check.txt dosyayı açınız(Uygulamayla aynı katalogda olmalıdır)");
           return 0;
       }
    } while (f!=1);
}

int options()
{
    int x=0;
    printf("1- Akilli telefon\n");
    printf("2- Akilli saat\n");
    printf("3- Yazici\n");
    printf("4- Bilgisayar\n");
    printf("Seciniz: ");
    scanf("%d",&x);
    return x;
}

void AT()
{
    printf("1-Akilli Telefon A      1500 TL\n");
    printf("2-Akilli Telefon B      2750 TL\n");
    printf("3-Akilli Telefon C      8832 TL\n");
    printf("************************************************************\n");
}
void AS()
{
    printf("1-Akilli Saat A       543.99 TL\n");
    printf("2-Akilli Saat B       1324.50 TL\n");
    printf("3-Akilli Saat C       850 TL\n");
    printf("************************************************************\n");
}
void YZ()
{
    printf("1-Yazici A           553.50 TL\n");
    printf("2-Yazici B           848.20 TL\n");
    printf("3-Yazici C           1433.33 TL\n");
    printf("************************************************************\n");
}
void BG()
{
    printf("1-Bilgisayar X        14600 TL\n");
    printf("2-Bilgisayar Y        12964 TL\n");
    printf("3-Bilgisayar Z        22920 TL\n");
    printf("4-Bilgisayar Q        36123 TL\n");
    printf("************************************************************\n");
}
