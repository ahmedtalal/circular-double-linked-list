
typedef struct doubleNode{
    struct doubleNode *next ;
    struct doubleNode *prev ;
    int item ;
}node ;

void createNode() ;
int isEmpty() ;
void firstInsert(int value) ;
void lastInsert(int value) ;
void firstDelete() ;
void lastDelete() ;
void searchItemValue(int position) ;
void display() ;

