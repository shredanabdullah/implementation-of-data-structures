/*
 * stack.h
 *
 *  Created on: Sep 23, 2023
 *      Author: Shredan Abdullah  
 */

#ifndef STACK_H_
#define STACK_H_


#define MAXSTACK 100
#define TYPE int


typedef TYPE StackEntry;
typedef struct stack{
   int top;
   StackEntry entry[MAXSTACK];
}Stack;

void IntializeStack(Stack *ptr_stack);
void Push(StackEntry item,Stack *ptr_stack);
void Pop(StackEntry *item,Stack *ptr_stack);
int  StackFull(Stack *ptr_stack);
int  StackEmpty(Stack *ptr_stack);
void StackTop(StackEntry *item, Stack *ptr_stack);
int  StackSize(Stack *ptr_stack);
void ClearStack(Stack *ptr_stack);
void TraverseStack (Stack *ptr_stack, void (*ptr_fun)(StackEntry));




#endif /* STACK_H_ */
