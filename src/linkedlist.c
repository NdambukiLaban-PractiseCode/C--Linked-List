#include <stdio.h>
#include <stdlib.h>


//Create a new structure called node with two fields for a number and a pointer to next node.
typedef struct node
{
    int number;
    struct node *next;
}
node;

int main (void)
{
    //Create a new list of size 0
    node *list = NULL;

    //Create and initialize a temporary node
    //Malloc request memory that can hold the contents of a node; 4bytes for int and 8bytes for pointer
    node *n = malloc( sizeof(node));
    if(n ==NULL)
    {
        //If the new node wasn't successfully created, quit
        return 1;
    }

    //Initialize the node fields and populate them accordingly
    n -> number = 1;     //or (*n).number = 1;
    n -> next = NULL;    //or (*n).next = NULL;

    //Assign the list to point to the first node n
    list = n;


}

