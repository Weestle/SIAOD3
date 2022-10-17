#include <iostream>
#include "Tree.h"

using namespace std;

int main() {
    string str;
    cin >> str;
//    cout << str << endl;
//    cout << str.substr(0, str.rfind('+')) << endl;
//    cout << str.substr(str.rfind('+') + 1, str.length() - 1);
    Tree tree = Tree(new Node(str));
    tree.display();
//    cout << tree.get_head()->get_operation();
//    cout << tree.get_head()->get_left()->get_number();
//    cout << tree.get_head()->get_right()->get_number();
//    cout << tree.get_head()->get_left()->get_left()->get_operation();
//    tree.get_head()->display();
//    Node* node = new Node('+');
//    node->set_left(new Node(1));
//    node->set_right(new Node(2));
//    node->display();
//    if (tree.contains_multi(tree.get_head())) cout << "+";
//    else cout << "-";
//    if (tree.is_expression(tree.get_head())) cout << "+";
//    else cout << "-";
}
