#include<stdio.h>
#include<string.h>
int main(){

    char name[]={'2','3','e','r'};
    printf("%s\n",name);

    char nam[20];
    printf("enter your name here:...\n");
    scanf("%s",nam);
    printf("%s\n",nam);


    char str[] = "abc" ;
    int i = 0;
    while(1){
        printf("%d-%c\n",i,str[i]);
        if(str[i]=='\0'){
            break;
        }
        i++;
    }


    char con[15];
    printf("inter your name here:\n");
    scanf("%s",con);
    printf(" hello!%s\n",con);



    char namee[50];
    printf("enter your name here:...\n");
    scanf("%s",namee);

    int j = 0, counter = 0;
    while(namee[j] != '\0'){
        counter++;
        j++;
    }
    printf("the langth of the namee is :%d\n",counter);




    //built function start

    char a[] = "bangladesh";
    int l = strlen(a);
    printf("the value langth is:%d\n", l);
    char b[] = "dhaka";

    strcpy(a, b);
    printf("the value of a is:%s\n", a);
    printf("the value of b is:%s\n", b);

    int x = strcmp(a, b);
    if (x == 0)
    {
        printf("a and b is equal\n");
    }
    else
    {
        printf("a and b is not equal\n");
    }

    strcat(a, b);
    printf("value of a is:%s\n", a);
    printf("value of b is:%s\n", b);

    return 0;
}


