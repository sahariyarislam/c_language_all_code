#include<stdio.h>
int main(){
        int l [3];
        l[0]=3;
        l[1]=4;
        l[2]=5;
        int m =l[0]+l[2];
        printf("%d\n",m);
    l[2]=100;
    m = l[0]+l[2];
    printf("%d\n",m);

    //loop array
    int c[5] ={12,11,13,20,32};
    int d;
    for(d=0;d<5;d++){
        printf("%d\n",c[d]);
    }
    //scanf array
    int e[5];
    int f;
    printf("put 5 input as number\n");
    for(f=0;f<5;f++){
        scanf("%d", & e[f]);
    }
    for(f=0;f<5;f++){
        printf("%d\n",e[f]);
    }

    //problem section

    int g[10], h, sum = 0;

    for (h = 0; h < 10; h++)
    {
        scanf("%d", &g[h]);
    }
    for (h = 0; h < 10; h++)
    {
        sum = sum + g[h];
    }
    printf("%d\n", sum);



    int k[7]={-99,45,100,37,89,-327,245};
    int max =k[0],j;
    for(j=0;j<7;j++){
        if(k[j]>max)
        max = k[j];
    }
    printf("max value is:%d\n",max);



    int a[5],b[5],ab[5];
    int i;
    printf("enter the value of :a\n");
    for(i=0;i<5;i++){
        scanf("%d",& a[i]);
    }
    printf("enter the value of b:\n");
    for(i=0;i<5;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++){
        ab[i]=a[i]+b[i];
    }
    printf("enter the value of array:\n");
    for(i=0;i<5;i++){
        printf("%d",ab[i]);
    }

    return 0;
}