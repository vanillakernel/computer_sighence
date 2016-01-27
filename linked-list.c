/* oh dear*/

#include<stdio.h>
#include<stdlib.h>

/* This is a simple node data structure that accepts ints
 * and a pointer to another node object 'next'  */
struct node
{
int data;
struct node* next;
}; 


/* 
 * The push function takes a reference pointer to the head of an existing node
 * and a data integer.
*/

void Push(struct node** headReference, int data)
{

// This is a little tricky.
// First get you a new pointer to a node and grab some memory
struct node* sweetNode = malloc(sizeof(struct node));

// THEN get you that sweet data
sweetNode->data = data;
// And a pointer to the head of the next node
sweetNode->next = *headReference;
// Then set the head pointer
*headReference = sweetNode;
}


/*
 * Build a sample list of 5 elements.
 */
struct node* makeList()
{

struct node* first = NULL; //All pointers are bad. 
struct node* second = NULL; 
struct node* third = NULL; 
struct node* fourth = NULL; 
struct node* fifth = NULL;
return first;
}


int main()
{
    printf("Hello!\n");
};


