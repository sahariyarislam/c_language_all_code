#include<stdio.h>
    struct student {
        int id;
        float cgpa;
        char name[15];
     };
int main(){

    struct student s1;

    printf("enter your id here:\n");
     scanf("%d", &s1.id);
     printf("enter your cgpa here:\n");
     scanf("%f", &s1.cgpa);
     printf("enter your name here:\n");
     scanf("%s", s1.name);

     printf("id:%d,cgpa:%f,and name:%s\n", s1.id, s1.cgpa, s1.name);

     return 0;
}