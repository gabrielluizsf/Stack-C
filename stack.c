#include <stdio.h>

#define MAXSIZE 8
      
int stack[8];     
int top = -1;            

int isEmpty() {

   if(top == -1)
      return 1;
   else
      return 0;
}
   
int isFull() {

   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}

int peek() {
   return stack[top];
}

int pop() {
   int data;
	
   if(!isEmpty()) {
      data = stack[top];
      top = top - 1;   
      return data;
   } else {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}

int push(int data) {

   if(!isFull()) {
      top = top + 1;   
      stack[top] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}

int main() {
   // push items on to the stack 
   push(34);
   push(75);
   push(69);
   push(10);
   push(52);
   push(15);
 
   printf("Element at top of the stack: %d\n" ,peek());
   printf("Elements: \n");

   // print stack data 
   while(!isEmpty()) {
      int stackPrint = pop();
      printf("%d\n",stackPrint);
   }

   printf("Stack full: %s\n" , isFull()?"true":"false");
   printf("Stack empty: %s\n" , isEmpty()?"true":"false");
   
   return 0;
}