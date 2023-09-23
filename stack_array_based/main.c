/*
 * main.c
 *
 *  Created on: Sep 23, 2023
 *      Author: Shredan Abdullah
 */


#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"


int main()
{
    //user level
    Stack s;
    StackEntry item;

    IntializeStack(&s);
    //pre check that stack is initialized and not full
    if(!StackFull(&s)){
        Push(item,&s);
    }
    //pre check that stack is initialized and not empty
    if(!StackEmpty(&s)){
        Pop(&item, &s);
    }
    void Display (StackEntry item) {
      printf("%d",item);
    }
    void StackTop_user_level(StackEntry *ptr_item, Stack *ptr_stack){
      Pop(ptr_item, ptr_stack);
      Push(*ptr_item,ptr_stack);
    }

    TraverseStack (&s, &Display);
    return 0;
}
