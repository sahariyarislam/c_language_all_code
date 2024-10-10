#include<stdio.h>
int main(){
    int a = 3;
    switch(a){
        case 1:
           printf("the value is:1\n");
           break;
        case 2:
          printf("the value is:2\n");
          break;
        case 3:
          printf("the value is:3\n");
          break;
        default:
         printf("i dont know\n");
    
    }


    char b = 'x';
    switch (b)
    {
    case 'a':
      printf("the value is:a\n");
      break;
    case 'b':
      printf("the value is:b\n");
      break;
    case 'x':
      printf("the value is:x\n");
      break;
    default:
      printf("i dont know\n");
    }

    return 0;
}