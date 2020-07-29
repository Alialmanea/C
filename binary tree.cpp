//
//  main.cpp
//  binaty tree
//
//  Created by dabbaghıe on 7/29/20.
//  Copyright © 2020 dabbaghıe. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

struct Node{
    int data;
    struct Node *left,*right;
    Node (int key){
        data = key;
        left = right = NULL;
    }
};

void inorder(Node *head){
    
    if(head == NULL)
        return;
    
    inorder(head ->left);
    printf("%d ", head->data);
    inorder(head ->right);
    
}

void preorder(Node *head){
    
    if(head == NULL)
        return;
    
    printf("%d ", head->data);
    inorder(head ->left);
    inorder(head ->right);
    
}

void postorder(Node *head){
    
    if(head == NULL)
        return;
    
    inorder(head ->left);
    inorder(head ->right);
    printf("%d ", head->data);
}

void insert(Node *temp, int key){
    queue<Node*> q;
    q.push(temp);
    
    // Do level order traversal until we find
    // an empty place.
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        
        if (!temp->left) {
            temp->left = new Node(key);
            break;
        } else
            q.push(temp->left);
        
        if (!temp->right) {
            temp->right = new Node(key);
            break;
        } else
            q.push(temp->right);
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    Node* root = new Node(10);
    root->left = new Node(11);
    root->left->left = new Node(7);
    root->right = new Node(9);
    root->right->left = new Node(15);
    root->right->right = new Node(8);
    
    insert(root, 12);
    printf(" \nInorder traversal : ");
    inorder(root);
    printf("\npreoredr traversal : ");
    preorder(root);
    printf("\npostorder traversal : ");
    postorder(root);
    return 0;
}
