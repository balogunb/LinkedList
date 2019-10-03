typedef struct {
  struct Node *next;
  struct Node *prev;
  int val;
} Node;

typedef struct {
  struct Node *head;
  struct Node *tail;
} LinkedList;



extern Node* createNode();
extern Node* createNode(int val);

/*
extern void createLinkedList( LinkedList);
extern void createLinkedListp( LinkedList*);
extern void insertInLinkedList( LinkedList, int val );
extern void insertInLinkedListp( LinkedList*, int val );
extern void printLinkedList( LinkedList );

*/
