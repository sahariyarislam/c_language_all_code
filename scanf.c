#include<stdio.h>
int main(){
    int x;
    printf("put your value here a:");
    scanf("%d", &x);
    printf("%d\n",x);

    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    float average = (a+b+c)/3.00;
    printf("value of a:%d\n",a);
    printf("value of b:%d\n",b);
    printf("value of c:%d\n",c);
    printf("average of a,b,and c: %.2f\n",average);

    int r = 50;
    if(r<60){
        printf("the value of r is : 50\n");
    }
    int t = 40;
    if (t<50 && t>3){
        printf("hello\n");
    }

    int ticketprice = 200;
    if(ticketprice<200){
        printf("i will go\n");       
    }else{
        printf("i will not go\n");
    }

    int v;
    scanf("%d", & v);
    if (v%3 == 0 ||v%5 == 0){
        printf("the value is divisible by 3 or five.\n");
    }else{
        printf("the value is not divisible by 3 or five\n");
    }


        int input;
        printf("put your value here for test:\n");
        scanf("%d", &input);
        if(input % 2 == 0){
            printf("the value is even\n");
        }else{
            printf("the value is odd\n");
        }


        char cha;
        printf("enter text here:\n");
        scanf("%c", &cha);
        if(cha == 'a'|| cha == 'e'|| cha == 'i'|| cha == 'o'|| cha == 'u'){
            printf("this is a vowel\n");
        }else{
            printf("this is a consonant\n");
        }

        //printf("this is a nestes if demo\n");

         char ch;
            printf("enter a,b,c or d\n");
            scanf("%c",& ch);
         if(ch=='a'){
            printf("apple\n");
         }else if(ch=='b')
         {
            printf("banana\n");
         }else if(ch=='c'){
            printf("cat\n");
         }else if(ch=='d'){
            printf("dog\n");
         }else{
            printf("unknown to me\n");
         }

         int age;
         printf("put your age:\n");
         scanf("%d", &age);
         if (age < 2)
         {
            printf("in fant\n");
         }
         else if (age < 10)
         {
            printf("child\n");
         }
         else if (age < 20)
         {
            printf("teenage\n");
         }
         else if (age < 30)
         {
            printf("adult");
         }
         else if (age >= 30)
         {
            printf("adult plus\n");
         }
         else
         {
            printf("old\n");
         }
            return 0;
}