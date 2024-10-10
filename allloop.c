#include<stdio.h>
int main(){

    int a;
    for(a = 1; a <= 3; a++){
        printf("let me go\n");
    }
    int b;
    for (b = 1; b <= 5; b = b+4){
        printf("***\n");
    }


    int c;
    for(c=1; c <= 5;c++){
        printf("%d\n",c);
    }

    int x;
    printf("print the decrement  value\n");
    for (x = 3; x >= 1; x--)
    {
        printf("%d\n", x);
    }

    int d;
    printf("print the even value\n");
    for(d=2;d<=10;d = d+2){
        printf("%d\n",d);
    }

    int e;
    printf("print the odd value\n");
    for (e = 1; e <= 10; e = e+ 2)
    {
        printf("%d\n", e);
    }

    
    int i ,sum = 0;
    for(i =30; i<=120;i++){
        if(i%3 == 0 && i%5 == 0){
            sum = sum + i;
        }
    }
    printf("summation:%d\n",sum);


    int f = 10;
    while(f<12){
        printf("this is while loop\n");

        f++;
    }

    int g = 1;
    while (g<=3){
        printf("hi\n");
        printf("hello\n");
        g= g +2;
    }

  //printf("test for do while loop");

    int h = 1;
    do{
        printf("do while loop\n");
        h= h+1;
    }while(h<=2);

   // printf("nested list start");


   int k,j;
   for(k=1;k<=3;k++){
    printf("outer loop start\n");
    for(j=1;j<=2;j++){
        printf("this is a inner loop\n");
    }
   }


   int l,m,n;
   for(l=1;l<=2;l++){
     for(m=1;m<=3;m++){
        printf("second loop\n");
        for(n=1;n<=5;n++){
            printf("hi\n");

        }
     }
   }

   int o, p, q, r, s;
   for (o = 1; o <= 1; o++)
   {
       printf("*\n");
       for (p = 1; p <= 1; p++)
       {
           printf("**\n");
           for (q = 1; q <= 1; q++)
           {
               printf("***\n");
               for (r = 1; r <= 1; r++)
               {
                   printf("**** \n");
                   for (s = 1; s <= 1; s++)
                   {
                       printf("*****\n");
                   }
               }
           }
       }
   }

   //printf("oporer code ti kivave sohoje lika jai nice lika hlo");

   int t, u;
   for (t = 1; t <= 5; t++){
       for (u = 1; u <= t; u++){
           printf("*");
       }
       printf("\n");
   }

   int v, w;
   for (v = 1; v<= 5; v++)
   {
       for (w = v; w <= 5; w++)
       {
           printf("*");
       }
       printf("\n");
   }

   //printf("this is a complex loop");

   int y, z;
   while (1)
   {
       printf("\n enter the value of n[input -1 to stop the code]\n");
       scanf("%d", &y);
       if (y == -1)
           break;
       if (y > -32)
       {
           for (z = y; z >= -32; z--)
           {
               printf("%d", z);
           }
       }
       else
       {
           for (z = y; z <= -32; z++)
           {
               printf("%d", z);
           }
       }
   }

    return 0;
}