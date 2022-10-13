#ifndef SIAOD3_NODE_H
#define SIAOD3_NODE_H


class Node {
private:
    char operation;
    int num;
    Node* left;
    Node* rigth;
public:
    Node(int num, Node* left, Node* rigth);
    Node(char oper, Node* left, Node* rigth);
    void set_left(Node* left);
    void set_right(Node* left);
    Node* get_left();
    Node* get_right();
    int get_number();
    char get_operation();
};


#endif //SIAOD3_NODE_H
