#include <stdio.h>
#include <stdlib.h>

#define N 5
int queue[N];

int front = -1;
int rear = -1;
void enqueue(int x)
{
    if (rear == N - 1)
    {
        printf("Overflow\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is Empty\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("Dequeued Element is: %d", queue[front]);
        front++;
    }
}

void display()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        for (int i = front; i < rear + 1; i++)
        {
            printf("%d ", queue[i]);
        }
    }
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("The data at front is: %d", queue[front]);
    }
}
int main()
{
    int choice;
    printf("Enter your Choice: \n0:Exit\n1:Enqueue\n2:Dequeue\n3:Peek\n4:Display");
    do
    {
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            int x;
            printf("Enter the value of element you want to enqueue");
            scanf("%d", &x);
            enqueue(x);
            break;
        }
        case 2:
        {
            dequeue();
            break;
        }
        case 3:
        {
            peek();
            break;
        }
        case 4:
        {
            display();
            break;
        }
        default:
        {
            printf("Invalid Choice");
            break;
        }
        }
    } while (choice != 0);
}
