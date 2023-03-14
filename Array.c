#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack[size];
int top=-1;
void push();
void pop();
void peek();
void display();
void length();
int main()
{
int ch;
do
{
printf("\nInput the desired operation:\n1.   PUSH (Insert Data)\n2.   POP (Delete Data)\n3.   PEEK\n4.   DISPLAY\n5.   SIZE\n6.   EXIT\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
peek();
break;
case 4:
display();
break;
case 5:
length();
break;
case 6:
printf("PROGRAM TERMINATED");
exit(0);
break;
}
}while(ch!=6);
return 0;
}

void push(){
if(top==size-1)
{
printf("OVERFLOW");
}
else
{
int item;
printf("Input the data to insert:\n");
scanf("%d",&item);
top=top+1;
stack[top]=item;
}
}

void pop()
{
if(top==-1)
{
printf("UNDERFLOW");
}
else
{
printf("Popped data is %d.",stack[top]);
top=top-1;
}
}
void peek()
{
if(top==-1)
{
printf("No element in stack.");
}
else
{
printf("Data at the top of stack is %d.",stack[top]);
}
}

void display()
{
if(top==-1)
{
printf("Stack is empty.");
}
else
{
printf("The Stack is:");
int i;
for(i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}
}
}
void length()
{
printf("The length of the stack is %d.",top+1);
}