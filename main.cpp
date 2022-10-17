#include <iostream>
#include "Tree.h"

using namespace std;

int main() {
    string str;
    cin >> str;
    Tree tree = Tree(new Node(str));
    if (tree.is_expression()) {
        tree.display();
        cout << endl;
        cout << tree.count();
        if (tree.contains_multi()) cout << "+";
        else cout << "-";
        if (tree.is_expression()) cout << "+";
        else cout << "-";
    }
    else cout << "Not expression";
//    Tree tree = Tree(new Node("1+1"));
//    cout << tree.get_head()->get_right()->get_number();
//    cout << tree.get_head()->get_right()->get_operation();
}
