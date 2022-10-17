#ifndef SIAOD3_NODE_H
#define SIAOD3_NODE_H

#include <string>
#include <iostream>

using namespace std;

class Node {
private:
    char operation = ' ';
    int num;
    Node* left = nullptr;
    Node* rigth = nullptr;
public:
    Node(int num);
    Node(char oper);
    Node(string expression);
    void set_left(Node* left);
    void set_right(Node* right);
    void set_numver(int number);
    void set_operation(char operation);
    Node* get_left();
    Node* get_right();
    int get_number();
    char get_operation();
    void display();
};


#endif //SIAOD3_NODE_H
