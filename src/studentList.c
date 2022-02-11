#include "studentList.h"


LinkedList* init(){
  // allocate the initial needed memory
  struct LinkedList* self = (LinkedList*) malloc(sizeof(struct LinkedList));;
  self->head = (Node*) malloc(sizeof(struct Node));
  self->tail = (Node*) malloc(sizeof(struct Node));
  // set the initial linked list head/tail condition
  self->head->next = self->tail;
  return self;
}


void freeAll(struct LinkedList* self){
  // free each and every node we have used (including head)
  struct Node* currNode = self->head;
  while(currNode != self->tail){
    struct Node* next = currNode->next;
    free(currNode);
    currNode = next;
  }
  // free tail and the linked list object itself
  free(currNode);
  free(self);
}


int insert(struct LinkedList* self, char* student){
  struct Node* currNode = self->head;

  // find the alphabetical index of the student
  while (currNode->next != self->tail && 
         strcmp(currNode->next->name, student) < 0 ){
    currNode = currNode->next;
  }
  // create our new node with the student name
  struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
  strncpy(newNode->name, student, 256);
  // update "next" pointers so that the new node is inserted after currNode
  newNode->next = currNode->next;
  currNode->next = newNode;
}


void printAll(struct LinkedList* self){
  struct Node* currNode = self->head;
  while (currNode->next != self->tail){
    currNode = currNode->next;
    printf("%s\n", currNode->name);
  }
}


int main(int argc, char** argv){  
  struct LinkedList* myList = init(myList);

  // Obvious issue that will cause a segfault
  myList->head = NULL;

  insert(myList, "James");  
  insert(myList, "Rebecca");  
  insert(myList, "Han");  
  insert(myList, "John");  
  insert(myList, "Faith");
  
  printAll(myList);

  freeAll(myList);
  
  return 0;
}
