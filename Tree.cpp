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

bool Tree::is_expression() {
    return this->get_head()->is_expression();
}

bool Tree::contains_multi() {
    return this->get_head()->contains_multi();
}

void Tree::display() {
    this->get_head()->display();
}

Tree::Tree(string expression) {
    this->head = new Node(expression);
}

int Tree::count() {
    return this->get_head()->count();
}
