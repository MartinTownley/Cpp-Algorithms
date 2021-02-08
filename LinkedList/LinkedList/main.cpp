//
//  main.cpp
//  LinkedList
//
//  Created by sierra on 08/02/2021.
//  Copyright © 2021 sierra. All rights reserved.
//

#include <iostream>


class List{
private:
    struct node{
        int data;
        node* next; //creates a node pointer inside each node
    };
    
    //typedef struct node* nodePtr;
    
    node* head;
    
    node* temp;
    node* z;
    
public:
    List() {
        head = NULL;
        curr = NULL;
        temp = NULL;
        z = new node;
        z->next = z; //z is last, points to itself
        
    };
    
    void addNodeToBack(int addData) {
        
        node* n = new node; //our node ptr points to the new node
        n->next = z;
        n->data = addData;
        
        if(head != NULL) {
            curr = head;
            while(curr->next != z)
            {
                curr = curr->next; //advance the current pointer till it gets to the last one
            }
            curr->next = n; //new node
        } else {
            head = n;
        }
        
    };
    
    void deleteNode(int delData) {
        
    };
    
    void printList() {
        
    };
    
    node* curr;
    
    
};

int main(int argc, const char * argv[]) {
    
    
    List myList;
    
    myList.addNodeToBack( 10 );
    
    std::cout << myList.curr->data << std::endl;

    
    
    
    // we want to put x in between head and z. To insert a new node into a linked list at a point following a given node t, create the node, assign its key value to whatever, then copy t's link into it.
    // since we want to put the x AFTER head, copy head's next into x's next:
    
    
    return 0;
}
