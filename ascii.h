typedef struct node{
    int key;
    struct node* next;
    struct node* prev;
}node;

typedef node *head;

void init(head *h);
void add_ascii(head *h, int key);
void display(head h);
