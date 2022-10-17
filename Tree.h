//
// Created by Antoshka on 13.10.2022.
//

#ifndef SIAOD3_TREE_H
#define SIAOD3_TREE_H

#include "Node.h"

class Tree {
private:
    Node *head;
public:
    Tree(Node* head);
    Node* get_head();
    bool is_expression(Node* head);
    bool contains_multi(Node* head);
    void display();
};


#endif //SIAOD3_TREE_H
