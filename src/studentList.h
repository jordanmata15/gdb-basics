#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
  struct Node * next;
  char name[256];
}Node;

typedef struct LinkedList{
  struct Node * head;
  struct Node * tail;
}LinkedList;

/** Create our linked list object and allocate the memory for the head and tail 
 *  nodes.
 *  
 *  @return Pointer to an empty LinkedList object.
 */
LinkedList* init();

/** Deallocates all our memory for us.
 */
void freeAll(struct LinkedList* self);

/** Insert the student name into our linked list in alphabetical order.
 *
 *  @param Pointer to our linked list object.
 *  @return 0 if added successfully, 1 if the name already exists.
 */
int insert(struct LinkedList* self, char* student);

/** Create our linked list object and allocate the memory for the head and tail 
 *  nodes.
 *  
 *  @param Pointer to our linked list object.
 */
void printAll(struct LinkedList* self);
