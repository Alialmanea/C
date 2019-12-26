// A complete working C program to demonstrate all insertion methods
// on Linked List
#include <stdio.h>
#include <stdlib.h>

// A linked list node
struct Node_t{
    int data;
    struct Node_t* next;
};
typedef struct Node_t Node;

Node* creat_node(int data){
    Node* new_node=(Node*)malloc(sizeof(Node*));
    new_node->data=data;
    new_node->next=NULL;
    return new_node;
}

void printLinkListof(Node *node)
{
    while (node != NULL)
    {
        printf("|%d|-->",node->data);
        node = node->next;
    }
    printf("\n");
}


void insertlast(Node* head,int data){
    Node* new_node=creat_node(data);
    if (head == NULL){
        head = new_node;
        return;
    }
    while (head->next!= NULL)
        head=head->next;
    head->next = new_node;
}

void AddLast(Node* head,int data){
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next=(Node*)malloc(sizeof(Node));
    temp->next->data=data;
    temp->next->next=NULL;
}
int len(Node* head){
    int i=0;
    while (head!=NULL) {
        head=head->next;
        i++;
    }
    return i;
}
int NumberOfNode(Node* head,int data){
    int i=0;
    while ( head!=NULL) {
        if(head->data!=data)
            i+=1;
        else
            return ++i;
        head=head->next;
    }
    return -1;
}
/* Driver program to test above functions*/
int main()
{
    Node *n1,*n2,*n3;
    
    n1=creat_node(1);
    n2=creat_node(2);
    n3=creat_node(3);
    n1->next=n2;
    n2->next=n3;
    n3->next=NULL;
    AddLast(n1,4);
    for (int i=5; i<=8; i++) {
        AddLast(n1,i);
    }
    printLinkListof(n1);
    printf("The Count of Nodes in LinkLast is : %d ",len(n1));
    printf("\n");
    if(NumberOfNode(n1,5)==-1)
        printf("The Node of Number |5|--> is not in LinkList");
    else
        printf("\nThe Number Node of |5|--> in LinkList is : %d  \n",NumberOfNode(n1,5));
    
    return 0;
}

