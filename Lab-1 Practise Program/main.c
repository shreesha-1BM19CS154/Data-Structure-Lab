#include <stdio.h>
#include <stdlib.h>

int main()
{   struct stud
   {
    float marks;
    char studentid[50];
    char name[50];
    int age;
    };
   int n,i,a;
   float m;
   printf("Enter number of students for admission:\n");
   scanf("%d",&n);
   struct stud s[100];
   for(i=0;i<=(n-1);i++)
   { printf("Enter %d student name:\n",i);
     scanf(" %s",s[i].name);
     printf("Enter %d student id:\n",i);
     scanf(" %s",s[i].studentid);
     printf("Enter %d student age:\n",i);
     scanf(" %d",&s[i].age);
     printf("Enter %d student marks:\n",i);
     scanf(" %f",&s[i].marks);
   }
   printf("   *****   \n");
   printf("The students selected for admission are(marks>65 and age > 20):\n");
   for(i=0;i<=(n-1);i++)
   {   a=s[i].age;
       m=s[i].marks;
       if(a >=20 && m >=65.0 )
       {printf("Student name: %s \n",s[i].name);
        printf("Student id : %s\n",s[i].studentid);
    } }
return 0;
}
