#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

//LinkedList LinkedList1, LinkedList2;
//LinkedList* p;



int main() {
Node *n = createNode();
Node *a = createNode(6);
n->val = 5;
printf("%d",a->val);
printf("%d",n->val);




/*

  initLinkedList( LinkedList1, "one", "f1", 0 );
  printLinkedList( LinkedList1 );
  
  initLinkedListp( &LinkedList2, "two", "f2", 10 );
  printLinkedList( LinkedList2 );
  
  p = &LinkedList1;
  initLinkedListp( p, "oneA", "f3", 20 );
  printLinkedList( *p );

  p = malloc( sizeof( LinkedList ));
  initLinkedListp( ``p, "oneB", "f4", 25 );
  printLinkedList( *p );
  free( p );
  
  
  */

}
