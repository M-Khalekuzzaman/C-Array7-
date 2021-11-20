#include<stdio.h>
int main()
{

    int a[3][4];
     for(int i = 0 ; i<3 ; i++)
     {
         for(int j = 0 ; j<4 ; j++)
         {
             scanf("%d",&a[i][j]);
         }
     }
     for(int k = 0; k<3 ;k++)
     {
         for(int l = 0; l<4 ; l++)
         {
             printf("%d  ",a[k][l]);
         }
         printf("\n");
     }

    getch();
}
