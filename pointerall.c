#include<stdio.h>
#include<stdlib.h>
int main(){

    int n = 10;
    printf("%p\n",&n);
    int *ptr;
    ptr = &n;
    printf("%p\n",ptr);
    printf("%d\n",*ptr);


    int x=10,y=20;
    int *p1 , *p2;
    p1 = &x;
    p2 = &y;
    int sum;
    sum = *p1 + *p2;
    printf("sum:%d\n",sum);


    int z =40;
    int *p3;
    p3 = &z;

   if(*p1>*p2 && *p1>*p3){
    printf("the largest vlaue is:%d\n",*p1);
   }else if (*p2>*p1 && *p2>*p3){
       printf("the largest vlaue is:%d\n",*p2);
   }else{
    printf("the largest value is:%d\n",*p3);
   }

//malloc and calloc test
    int *ptr4;
    ptr4 = (int*)malloc(20);
    if(ptr4==NULL){
        printf("memorey is not allocated\n");
    }else{
        printf("memorey is allocated successfully\n");
    }

    int *ptr5;
    ptr5 = (int *)calloc(20,sizeof(int));
    if (ptr5 == NULL)
    {
        printf("memorey is not allocated\n");
    }
    else
    {
        printf("memorey is allocated successfully\n");
    }

//memory realloction test

    int *ptr6,*ptr7;
    ptr6 = (int *)calloc(7, sizeof(int));
    printf("the value of calloc are:%d\n",*ptr6);//calloc 0 diye initialize kore tya print krle 0 dekay
     ptr7 = (int*)malloc(20);

     printf("the value of malloc are:%d\n", *ptr7); //malloc er value deka jai na dekte cayle garbage value dekay
     if (ptr6 == NULL || ptr7 == NULL)
     {
         printf("memorey is not allocated\n");
    }
    else
    {
        printf("memorey is allocated successfully\n");
        ptr7 = realloc(ptr7,35);
        printf("memorey is reallocted\n");
    }

//pointer use with array and function

    int a[5]= {1,2,3,4,5};
    int i;sum = 0;
    int *ptr8 = & a[3];
    for(i=0;i<5;i++){
        printf("%u\n",&a[i]);
        sum=sum +*(a+i);
    }
    printf("adress of a value:%u\n",a);
    printf("the sum of the value is:%d\n",sum);
    printf("%d\n",*(ptr8));
    printf("%d\n", *(ptr8+1));
    printf("%d\n", *(ptr8-1));



    return 0;
}