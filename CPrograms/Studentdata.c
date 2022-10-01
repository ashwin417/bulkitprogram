// This program is used to store the data of students in which the user can input the data to be stored.

#include <stdio.h>

#include <string.h>

#include <stdlib.h>

struct student

{

    int rollno;

    char name[7];

    float mark;

    

};

int main() 

{

    

    int i;

    struct student s[5];

    printf("STUDENT DATA:\n\n");

    for(i=0;i<5;i++)

    {

        printf("Enter Roll No. : ");

        scanf("%d",&s[i].rollno);

        // The array 'name' should contian characters less than 8.

        printf("Enter Name : ");

        scanf("%s",s[i].name);

        printf("Enter Mark : ");

        scanf("%f",&s[i].mark);

        printf("\n");

    }

    

    printf("Roll No.:\tName:\t\tMark:\t  Grade:\n");

    for(i=0;i<5;i++)

    {

        printf("   %d\t",s[i].rollno);

        printf("\t%s\t\t",s[i].name);

        printf("%.2f\t",s[i].mark);

        

        

        if(s[i].mark>90.00)

        {

            printf("    A");

        }

        

        else if(s[i].mark>80.00)

        {

            printf("    B");

        }

        else if(s[i].mark>70.00)

        {

            printf("    C");

        }

        else if(s[i].mark>60.00)

        {  

            printf("    D");

        }

        else if(s[i].mark>50.00)

        {

            printf("    E");

        }

        else

        {

            printf("    F");

        }

        printf("\n");

    }

    return 0;

}
