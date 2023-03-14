#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void peek();
void display();
struct node
{
int data;
struct node *nextptr;
};
struct node *top=NULL;
int main()
{
int ch;
do
{
printf("Input the desired operation:\n1.   PUSH\n2.   POP\n3.   PEEK\n4.   DISPLAY\n5.   EXIT\n");
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
printf("PROGRAM TERMINATED");
exit(0);
break;
}
}
while(1);
return 0;
}
void push()
{
int value;
struct node *ptr;
ptr=(struct node *)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("OVERFLOW\n");
}
else
{
printf("Input the value to push:\n");
scanf("%d",&value);
if(top==NULL)
{
ptr->data=value;
ptr->nextptr=NULL;
top=ptr;
}
else
{
ptr->data=value;
ptr->nextptr=top;
top=ptr;
}
}
}
void pop()
{
int pop_value;
struct node *ptr;
if(top==NULL)
{
printf("UNDERFLOW\n");
}
else
{
pop_value=top->data;
printf("Popped data is %d.\n",pop_value);
ptr=top;
top=top->nextptr;
free(ptr);
}
}
void peek()
{
struct node *ptr;
ptr=top;
if(ptr==NULL)
{
printf("Empty stack\n");
}
else
{
printf("The peek value is %d.\n",ptr->data);
}
}
void display()
{
int x;
struct node *ptr;
ptr=top;
if(ptr==NULL)
{
printf("Stack is empty.");
}
else
{
printf("The stack is:\n");
while(ptr!=NULL)
{
printf("%d\n",ptr->data);
ptr=ptr->nextptr;
}
}
}
