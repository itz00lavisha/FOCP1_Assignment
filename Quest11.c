#include<stdio.h>
int main()
{
int marks[100],n,i,count=0;
printf("Enter the total number of students:");
scanf("%d",&n);
    
 printf("Enter marks of %d students:",n);
    for(i=0;i<n;i++)
     {
        scanf("%d",&marks[i]);
     }

     for(i=0;i<n;i++)
     {
        if(marks[i]==99)
          {
            printf("Student nos %d scored 99 marks\n",i+1);
            count++;
          }
     }
      if(count>0)
         printf("total number of students who scored 99 are:%d\n",count);
      else
         printf("none of the student scored 99\n");
      
         return 0;
}
