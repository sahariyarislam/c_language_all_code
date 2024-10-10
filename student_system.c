//  work application
// file advance curd application
// 1.show all
// 2.dellet //give id dellet data from file
// 3.update // give id mark change marks in id
// 4.create // give id marks roll add this in file
// 5.sort by roll
#include <stdio.h>
#include <string.h>

struct student
{
    char id[10];
    int marks, roll;
};

typedef struct student std;
int n;
std arr[100];

void readdata()
{
    int i;
    FILE *fp;
    fp = fopen("stddata.txt", "r");
    fscanf(fp, "%d", &n);
    for (i = 0; i < n; i++)
    {
        fscanf(fp, "%s%d%d", arr[i].id, &arr[i].marks, &arr[i].roll);
    }
    fclose(fp);
}

void writedata()
{
    int i;
    FILE *fp;
    fp = fopen("stddata.txt", "w");
    fprintf(fp, "%d", n);
    for (i = 0; i < n; i++)
    {
        fprintf(fp, "%s\n%d\n%d\n", arr[i].id, arr[i].marks, arr[i].roll);
    }
    fclose(fp);
}
void show()
{
    int i;
    readdata();
    for (i = 0; i < n; i++)
    {
        printf("%s\n%d\n%d\n", arr[i].id, arr[i].marks, arr[i].roll);
    }
}

int findbyid(char id[])
{
    int pos = -1;
    int i;

    readdata();
    for (i = 0; i < n; i++)
    {
        if (strcmp(arr[i].id, id) == 0)
        {
            pos = i;
        }
    }
    return pos;
}

int main()
{
    int q, i;
    printf("press your qurey no:___\n");
    scanf("%d", &q);
    if (q == 1)
    {
        show();
    }
    if (q == 2)
    {
        char id[100];
        printf("Enter your id for dellet from list\n");
        scanf("%s", id);
        // readdata();
        int pos = findbyid(id);
        if (pos != -1)
        {
            for (i = pos; i < n - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            n--;
        }
        else
        {
            printf("id not found\n");
        }
        writedata();
        show();
    }
    if (q == 3)
    {
        char id[100];
        int m;
        printf("Enter id and new marks\n");
        scanf("%s%d", id, &m);
        int pos = findbyid(id);
        if (pos != -1)
        {
            arr[pos].marks = m;
        }
        writedata();
        show();
    }
    if (q == 4)
    {
        char id[100];
        int m, r;
        printf("Enter id,marks,roll to add a student in the file \n");
        scanf("%s%d%d", id, &m, &r);
        readdata();
        strcpy(arr[n].id, id);
        arr[n].marks = m;
        arr[n].roll = r;
        n++;
        writedata();
    }

    return 0;
}