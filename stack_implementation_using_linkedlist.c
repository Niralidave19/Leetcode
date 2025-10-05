/* Stack implementation using Linked List 
/* Implementation includes: Adding elements into the stack and popping out elements from stack 
   using LIFO stratergy */

#include <stdio.h>
#include <stdlib.h>
/* Structure that represents each node in a linkedlist */
struct node
{
    int val;
    struct node* next;
};

/*create new node entry as element added into the stack*/
struct node* create_node(int data){
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->val = data;
    new_node->next = NULL;
    return new_node;
}

/* Add node before head of the stack
   Lets say the current stack is 10-->20->30  
   When a new node of value 50 is added into the stack , 
   the resulting stack would be: 50 -> 10 -> 20 -> 30 */
void insert_before_head(struct node **head,int data){
    struct node* new_node = create_node(data);
    //check if stack is empty
    if(head == NULL){
        *head = new_node;
        return;
    }
    new_node->next = *head;
    *head = new_node;
    return;
}

/*print stack contents*/
void printStack(struct node** stack)
{
    struct node* temp = *stack;
    while (temp != NULL) {
        printf("%d-> ", temp->val);
        temp = temp->next;
    }
    printf("\n");
}

/*Remove element from the stack: Note: Last in First out stratergy*/
void pop(struct node** stack){
    struct node* temp = *stack;
    *stack = (*stack)->next;
    free(temp);
}

int main() {
    /* create a pointer that points to head of stack */
    struct node* stack = NULL;
    /*push into the stack*/
    insert_before_head(&stack,10);
    insert_before_head(&stack,20);
    insert_before_head(&stack,30);
    printStack(&stack);
    
    /*pop from stack - LIFO*/
    pop(&stack);
    pop(&stack);
    printStack(&stack);
    return 0;
}