#include<stdio.h>

#include<stdio.h>

#include<string.h>

#define max 100

char ss[max];int top=0;

int isfull()

{if(top==max)

return(1);

else

return(0);

}

void push(char a)

{ if(!isfull())

ss[top++]=a;

}

void displaystack()

{int i;

printf("\t stack : ");

for(i=0;i<top;i++)

printf("%c ",ss[i]);

}

void displaypost(char a[],int k)

{int i;

printf("\t postfix : ");

for(i=0;i<k;i++)

printf("%c ",a[i]);

}

char peek()

{return(ss[top-1]);}

char pop()

{return(ss[--top]);}

int isempty()

{if(top==0)

return(1);

else

return(0);

}

int inptpre(char c)

{

switch(c)

{ case '-':

case '+': return(1);break;

case '*':

case '/': return(3);break;

case '^': return(6);break;

}

}

int stkpre(char c)

{

switch(c)

{ case '-':

case '+': return(2);break;

case '*':

case '/': return(4);break;

case '^': return(5);break;

case '(': return(0);break;

}

}

void main()

{ int i,j=0;

char expr[50], post[50],token,c;

printf( "\nEnter an infix expr\n");

scanf("%[^\n]",expr);

printf("\n %s \n",expr);

for(i=0;expr[i]!='\0';i++)

{ token=expr[i];

switch(token)

{ case '(': push(token);break;

case ')': while((c=pop())!='(')

post[j++]=c;

break;

case '-':

case '+':

case '*':

case '/':

case '^': while(!isempty() && (stkpre(peek())>inptpre(token)))

post[j++]=pop();

push(token);

break;

default: post[j++]=token;

}

printf("\n Token: %c",token);

displaystack(); displaypost(post,j);

}

while(!isempty())

post[j++]=pop();

post[j]='\0';

printf("\n Postfix: %s \n",post);

}
