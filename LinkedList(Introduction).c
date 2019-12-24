//
//  main.c
//  LinkList
//
//  Created by dabbaghıe on 12/23/19.
//  Copyright © 2019 dabbaghıe. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct Node_t{
    int data;
    struct Node_t* next;
};

typedef struct Node_t Node;


void printList(Node* head){
    Node* temp=head;
    while (temp!=NULL) {
        printf("%d-->",temp->data);
        temp=temp->next;
    }
    
    printf("\n");
}



void printList1(Node* n)
{
    while (n != NULL) {
        printf(" %d ", n->data);
        n = n->next;
    }
}


int main(int argc, const char * argv[]) {
    
    Node n1,n2,n3;   //make node
    Node *head=NULL;  //make head Node
    
    
    head=&n1; //Make the first node head of linklist
    n1.data=5;             /*|5|-->|23|-->|50|*/
    n2.data=23;
    n3.data=50;
    
    n1.next=&n2;
    n2.next=&n3;
    n3.next=NULL;
    
    
    printList(head);
    
    
    return 0;
}

