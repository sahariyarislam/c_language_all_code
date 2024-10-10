
 //function kivabe kaj kore tar demo
#include <stdio.h>

int getsum(int x,int y){
    int sum = x+y;
    return sum;

}
void sayhi(){
    printf("hi\n");

}
   void evenorodd(int a){
        if(a%2 == 0){
            printf("the value is even\n");
        }else{
            printf("the value is odd\n");
        }
    }

  void devisor(int b){
    int c;
        for(c=1;c<=b;c++){
            if(b%c==0){
                printf("%d\n",c);
            }
        }
   }

   float add(float d, float e)
   {
       return d + e;
   }
   float subtract(float d, float e)
   {
       return d - e;
   }
   float multiply(float d, float e)
   {
       return d * e;
   }
   float divide(float d, float e)
   {
       return d / e;
   }

int main(){
    printf("main start here\n");
    sayhi();
   int result =getsum(10,20);
   printf("my sum: = %d\n",result);
   evenorodd(7);
   devisor(15);

   float d,e;

   printf("print the value of a and b\n");
   scanf("%f%f",&d,&e);

   float addresult = add(d,e);
   float subtractresult = subtract(d, e);
   float multiplyresult = multiply(d, e);
   float divideresult = divide(d, e);
   printf("add%.2f:,suntract%.2f:,multiply%.2f:,devide%.2f:\n",addresult,subtractresult,multiplyresult,divideresult);

   return 0;

   
}