#include<stdio.h>
int main(){

    FILE *fp;
    fp = fopen("testfile.txt","a+"); 
    int i;
    for(i=0;i<90;i++){
        fputc(i,fp);
    }
    
    
    char arr[100]= "hi i am sahariyar islam\n";
    fputs(arr,fp);


    fprintf(fp,"my id is :%d\n",100);


    int c;
    c = fgetc(fp);
    printf("the char is :%c\n",c);

    char buff[100];
    fscanf(fp,"%s",buff);
    printf("the data in buffer is:%s\n",buff);


    fgets(buff,500,fp);
    printf("the data in buffer is :%s\n",buff);





    fclose(fp);

    return 0;
}