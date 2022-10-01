//C Program

#include <stdio.h>

void main()

{   

    int choice, calculatorChoice,exit = 1;

    float num1, num2,result;

    int number;

    void isPrime(int n);

    void isAmstromg(int n);

    void printFactorial(int n);

    while(exit)

    {

        printf("\n1. Binary Calculator \n2. Number Functions\n3. Exit");

        printf("\nEnter a choice : ");

        scanf("%d",&choice);

        switch(choice)

        {

            case 1:

                printf("\nEnter number I : ");

                scanf("%f",&num1);

                printf("Enter number II : ");

                scanf("%f",&num2);

                printf("\n1. Addition (+) \n2. Subtraction (-)\n3. Multiplication (*)\n4. Division(/)\n");

                printf("\nEnter a choice : ");

                scanf("%d",&calculatorChoice);

                switch (calculatorChoice)

                {

                case 1:

                    result = num1 + num2;

                    printf("%.2f + %.2f = %.2f\n",num1,num2,result);

                    break;

                case 2:

                    result = num1 - num2;

                    printf("%.2f - %.2f = %.2f\n",num1,num2,result);

                    break;

                case 3:

                    result = num1 * num2;

                    printf("%.2f * %.2f = %.2f\n",num1,num2,result);

                    break;

                case 4:

                    result = num1 / num2;

                    printf("%.2f / %.2f = %.2f\n",num1,num2,result);

                    break;

                

                default:

                    printf("\nError! Enter Proper Choice...");

                    break;

                }

            break;

            case 2:

                //number fn implementation here

                break;

            case 3:

                exit=0;

                break;

    }

    }

}
