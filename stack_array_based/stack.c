/*
 * stack.c
 *
 *  Created on: Sep 23, 2023
 *      Author: Tobi
 */


#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"


//array based implementation of stack data structure

//implementation level
void IntializeStack(Stack *ptr_stack){
   ptr_stack->top=0; //push then top++
   //ptr_stack->top=-1; //top++ then push ->>>>> ptr_stack->entry[ptr_stack->++top]=item;
}
void Push(StackEntry item,Stack *ptr_stack){
    //push then top++ in one line ptr_stack->entry[ptr_stack->top++]=item;
   //ptr_stack->entry[++(ptr_stack->top)]=item;
   ptr_stack->entry[ptr_stack->top]=item;
   ptr_stack->top++;
}
void Pop(StackEntry *item,Stack *ptr_stack){
     //top-- then pop
     ptr_stack->top--;
     *item = ptr_stack->entry[ptr_stack->top];
}
//StackEntry Pop(Stack *ptr_stack){
    //top-- then pop
 //   ptr_stack->top--;
  // return ptr_stack->entry[ptr_stack->top];
//}
int StackFull(Stack *ptr_stack){
  if(ptr_stack->top==MAXSTACK){return 1;}
  else {return 0;}
}
int StackEmpty(Stack *ptr_stack){
   if(ptr_stack->top==0){return 1;}
   else {return 0;}
}
void StackTop(StackEntry *item, Stack *ptr_stack){
  //top-- then pop
  ptr_stack->top--;
  *item = ptr_stack->entry[ptr_stack->top++];
  //*item = ptr_stack->entry[ptr_stack->top-1];
}
int StackSize(Stack *ptr_stack){
   //int count=0;
   //int temp=ptr_stack->top;
   //while(temp!=0){
   // count++;
   // temp--;
  // }
  // return count;
  return ptr_stack->top;
}
void ClearStack(Stack *ptr_stack){
    ptr_stack->top=0;
}
void TraverseStack (Stack *ptr_stack, void (*ptr_fun)(StackEntry)){
  for(int i=ptr_stack->top;i>0;i--){
    (*ptr_fun)(ptr_stack->entry[i-1]);
  }
}

