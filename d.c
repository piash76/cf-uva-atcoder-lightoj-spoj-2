#include<stdio.h>

#include<string.h>

struct information

{

    char name[100];

    char id[100];

    double salary;

};
int main()

{

    struct information employee[3];

    int  k;

    char s[100];

    char r[100];

    double t;

    for(int i=1; i<=2; i++)
    {
       // getchar();

       scanf("%s",s);
       printf("1St %s\n",s);

        strcpy(employee[i].name,s);

        getchar();

        scanf("%s",r);
         printf("2ND %s\n",r);

         getchar();


        strcpy(employee[i].id,r);

        scanf("%lf",&t);
        printf("VALUE : ");
        printf("%.2lf",t);
        printf("\n");

        employee[i].salary=t;

    }
    for(int i=0; i<3; i++)
    {

        if(employee[i].salary>employee[i+1].salary)

        {

            k=i;

        }

    }
    printf("Name : %s\n",employee[k].name);

    printf("ID: %s\n",employee[k].id);

    printf("Salary: %.2lf",employee[k].salary);
}
