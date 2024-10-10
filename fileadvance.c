#include<stdio.h>
#include<stdlib.h>
int main(){

    FILE *fp;
    fp = fopen("donation.txt","r+");

    char name[20];
    int donation = 0, i;

    for (i = 0; i < 5; i++)
    {
        printf("enter your name please:\n");
        scanf("%s", name);

        printf("enter your amaount please:\n");
        scanf("%d", &donation);

        fprintf(fp, "%s %d", name, donation);
    }
 
 //nicer onso read krte hle oporer ta comment out kore read krte hve aksate pora jacce na
    char b[20];
    int sum = 0;
    while(1){
      int code = fscanf(fp,"%s",b);
      if(code==EOF){
        break;
      }
      printf("%s",b);

    
    code = fscanf(fp,"%s",b);
    if(code==EOF){
        break;
    }
    printf("%s\n",b);
    sum = sum + atoi(b);

    }
    printf("total donation:%d\n",sum);
    

     
    
    fclose(fp);
    return 0;
}