#include<stdlib.h>

#include<stdio.h>

#define size 50

int Q[size], rear=-1,front=-1;

int isempty()

{

	if(front == -1)		return 1;

	else

		return 0;

}

int isfull()

{

	if((front == rear + 1) || ((front == 0) && (rear == size - 1)))

		return 1;

	else

		return 0;

}

void Insertrear(int item)

{

	if(isfull())

		printf("Queue is Full");

	else

		{

			if(front == -1)

				front = rear = 0;

			else

				rear = (rear + 1) % size;

		Q[rear] = item;

		}

	

}

int Deletefront()

{

	int item=0;

	if(isempty()){

		printf("Queue is empty");

	}

	else{

		item=Q[front];

		if(front == rear)

			front = rear = -1;

		else

			front = (front +1)%size;

	}

	return item;

}

void Insertfront(int item)

{

	if(isfull())

		printf("Queue is full");

	else

		if(front==-1)

			front=rear=0;

		else

			front = (front+size-1)%size;

		Q[front]= item;

}

int Deleterear()

{

	int item=0;

	if(isempty())

		printf("Queue is empty");

	else

		item=Q[rear];

	if(front == rear)

		front = rear = -1;

	else

		rear = (rear + size-1)%size;

	return item;

	

}

void Display()

{

	int i;

	printf("\n Queue :");

	for (i = front; i != rear; i = (i + 1) % size) {

		printf("%d ", Q[i]);

	}

	printf("%d ", Q[i]);

}

int main()

{

	int ch;

	printf("Queue");

	do{

		printf("\n1. Insert 2. Delete 3.Display 4.exit\n");

		scanf("%d",&ch);

		switch(ch)

			{

			case 1: {

				int item,value;

					printf("Item to be entered : ");

				scanf("%d",&item);

				printf("1.front 2.rear(Enter  either 1 or 2\n");

			    scanf("%d",&value);

			    if(value==1)

			    {

		  	 Insertfront(item);

			    }

			    else if(value==2)

			    {

		   	Insertrear(item);

				}

				else

				    printf("Error");	

				break;

			}

			case 2: {

				int val,value;

				printf("1.front 2.rear\n");

			    scanf("%d",&value);

			    if(value==1)

			    {

				 val = Deletefront();

					printf("The deleted item is %d",val);

			    }

			    else if(value==2)

			    {

			    		int val = Deleterear();

					printf("The deleted item is %d",val);

				break;

			} 

			case 3: Display(); 

			   break;

			case 4: exit(0);

			}

 	}

	}while(ch!=5);		

   return 0;

}  
