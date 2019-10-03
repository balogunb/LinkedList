#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedlist.h"


Node* createNode(){
  Node *n = malloc( 3 * sizeof(int))
  n->next = 0;//NULL
  n->prev = 0;//NULL
  
  return n;
}




Node* createNode(int val){
  Node *n = malloc( 3 * sizeof(int));
  n->next = NULL;//NULL
  n->prev = NULL;//NULL
  n->val = val;
  
  return n;
}


/*
void createLinkedList( LinkedList l) {
  l->head = n;
  l->tail = n.next;
}

void createLinkedListp( LinkedList l) {

}




void initStudentp( Student *s, char* l, char* f, int a ) {
  strcpy( s->last, l );
  s->first = f;
  s->age = a;
}

void printStudent( Student s ) {
  char printBuf[200];
  sprintf( printBuf, "The student %s %s has an age of %d\n", s.first, s.last, s.age );
  printf( "%s", printBuf );
}

*/



		 
