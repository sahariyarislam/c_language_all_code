#include<stdio.h>
void swap(int *n1, int *n2){
    int temp = *(n1);
    *(n1)= *(n2);
    *(n2)= temp;
}

int sum(int *a ,int size){
    int i,sum=0;
    for(i=0;i<size;i++){
        sum = sum + *(a+i);
    }
    return 0;
}
int main(){
    int num1 = 5,num2 = 10;
    printf("num1 :%d;num2:%d\n", num1,num2);
    swap(&num1,&num2);
    printf("num1 :%d;num2:%d\n" ,num1, num2);

    int arr[3]={4,5,10};
    int result = sum(arr,3);
    printf("sum of the array is:%d", result);


    

    return 0;
}