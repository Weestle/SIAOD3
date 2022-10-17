//
// Created by Antoshka on 13.10.2022.
//

#include "Node.h"

Node::Node(int num) {
    this->num = num;
}

Node::Node(char oper) {
    this->operation = oper;
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

Node::Node(string expression) {
    string str_left, str_right;
    int plus_ind = expression.rfind("+");
    int minus_ind = expression.rfind("-");
    int multi_ind = expression.rfind("*");
    if (plus_ind != -1  && plus_ind > multi_ind) {
        this->set_operation('+');
        this->set_left(new Node(expression.substr(0, plus_ind)));
        this->set_right(new Node(expression.substr(plus_ind + 1, expression.length() - 1)));
    }
    else if (multi_ind != -1 && minus_ind > plus_ind) {
        this->set_operation('-');
        this->set_left(new Node(expression.substr(0, minus_ind)));
        this->set_right(new Node(expression.substr(minus_ind + 1, expression.length() - 1)));
    }
    else if (multi_ind != -1) {
        this->set_operation('*');
        this->set_left(new Node(expression.substr(0, multi_ind)));
        this->set_right(new Node(expression.substr(multi_ind + 1, expression.length() - 1)));
    }
    else {

        this->set_numver(stoi(expression));
    }
}

void Node::set_numver(int number) {
    this->num = number;
}

void Node::set_operation(char operation) {
    this->operation = operation;
}

void Node::display() {
    if (this->get_operation() != ' ') cout << this->get_operation();
    else cout << this->get_number();
    if (this->get_left() != nullptr) this->get_left()->display();
    if (this->get_right() != nullptr) this->get_right()->display();
}



