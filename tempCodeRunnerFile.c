#include<stdio.h>
//#include<string.h>
struct student{
    char id[10];
    int marks,roll;
};
typedef struct student std;
std arr[100];
int n;

int main(){
    int i;
    
    FILE *fp;
    fp=fopen("stddata.txt","r");
    fscanf(fp,"%d",&n);
    for(i=0;i<n;i++){
        fscanf(fp,"%s%d%d",arr[i].id,&arr[i].marks,&arr[i].roll);
    }
    fclose(fp);
    for(i=0;i<n;i++){
        printf("%s\n%d\n%d\n",arr[i].id,arr[i].marks,arr[i].roll);
    }
    return 0;
}