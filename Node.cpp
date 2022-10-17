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
    if (plus_ind > minus_ind) {
        this->set_operation('+');
        str_left = expression.substr(0, plus_ind);
        str_right = expression.substr(plus_ind + 1, expression.length() - 1);
    }
    else if (minus_ind > plus_ind) {
        this->set_operation('-');
        str_left = expression.substr(0, minus_ind);
        str_right = expression.substr(minus_ind + 1, expression.length() - 1);
    }
    else if (multi_ind != -1) {
        this->set_operation('*');
        str_left = expression.substr(0, multi_ind);
        str_right = expression.substr(multi_ind + 1, expression.length() - 1);
    }
    if (!str_left.empty()) this->set_left(new Node(str_left));
    if (!str_right.empty()) this->set_right(new Node(str_right));
    if (minus_ind == -1 && multi_ind == -1 && plus_ind == -1) this->set_numver(stoi(expression));
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

int Node::count() {
    if (this->get_operation() == '+') {
        return (this->get_left()->count() + this->get_right()->count());
    }
    if (this->get_operation() == '-') {
        return (this->get_left()->count() - this->get_right()->count());
    }
    if (this->get_operation() == '*') {
        return (this->get_left()->count() * this->get_right()->count());
    }
    else return this->get_number();
}

bool Node::contains_multi() {
    if (this->get_operation() == '*') return true;
    if (this->get_left() != nullptr) this->get_left()->contains_multi();
    if (this->get_right() != nullptr) this->get_right()->contains_multi();
}

bool Node::is_expression() {
    if (this->get_right() == nullptr && this->get_left() != nullptr ||
        this->get_right() != nullptr && this->get_left() == nullptr) return false;
    if (this->get_left() != nullptr) this->get_left()->is_expression();
    if (this->get_right() != nullptr) this->get_right()->is_expression();
    return true;
}
