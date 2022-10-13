//
// Created by Antoshka on 13.10.2022.
//

#include "Node.h"

Node::Node(int num, Node* left, Node* rigth) {
    this->num = num;
    this->left = left;
    this->rigth = rigth;
}

Node::Node(char oper, Node *left, Node *rigth) {
    this->operation = oper;
    this->left = left;
    this->rigth = rigth;
}

void Node::set_left(Node *left) {
    this->left = left;
}

void Node::set_right(Node *rigth) {
    this->rigth = rigth;
}

Node *Node::get_left() {
    return left;
}

Node *Node::get_right() {
    return rigth;
}

int Node::get_number() {
    return num;
}

char Node::get_operation() {
    return operation;
}



