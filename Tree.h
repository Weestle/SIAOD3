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
    Tree(string expression);
    Node* get_head();
    bool is_expression();
    bool contains_multi();
    void display();
    int count();
};


#endif //SIAOD3_TREE_H
