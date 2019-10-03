typedef struct {
  Node *next;
  Node *prev;
  int data;
} Node;

typedef struct {
  Node *head;
  Node *tail;
} LinkedList;




extern void createLinkedList( LinkedList);
extern void createLinkedListp( LinkedList);
extern void insertInLinkedList( LinkedList, int val );
extern void insertInLinkedListp( LinkedList*, int val );
extern void printLinkedList( LinkedList );


