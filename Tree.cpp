//
// Created by Antoshka on 13.10.2022.
//

#include <iostream>
#include "Tree.h"
#include <string>

using namespace std;

Node *Tree::get_head() {
    return head;
}

bool Tree::is_expression(Node* head) {
    if (head->get_left() && head->get_right() && head->get_number()) return false; // Имеет два последователя и число
    if (!head->get_left() && head->get_right() || head->get_left() && !head->get_right()) return false; // Имеет не два последователя
    if (!head->get_left() && !head->get_right() && !head->get_number()) return false; // Не имеет последователей и не число
    if ((head->get_operation() == '*' || head->get_operation() == '+' || head->get_operation() == '-') && (!head->get_left() || !head->get_right())) return false;
    if (head->get_left()) is_expression(head->get_left());
    if (head->get_right()) is_expression(head->get_right());
    return true;
}

bool Tree::contains_multi(Node* head) {
    if (head->get_operation() == '*') return true;
    if (head->get_left()) contains_multi(head->get_left());
    if (head->get_right()) contains_multi(head->get_right());
    return false;
}

void Tree::display() {
    this->get_head()->display();
}

Tree::Tree(Node *head) {
    this->head = head;
}
