#include<stdio.h>
int main(){
    int x [3][3] ={1, 2, 3,
                   4, 5, 6, 
                   7, 8, 9};
     printf("%d",x[1][2]);

     //complex 2d array

     int a[3][3],i,j,sum = 0;
     printf("put 9 values for matrix\n:");
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",& a[i][j]);
        }
     }
     
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d", a[i][j]);
                sum = sum + a[i][j];
            }
            printf("\n");
        }
            float avrage = sum/9.00;
            printf("average is :%f",avrage);

     
            return 0;
        }