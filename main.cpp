#include <iostream>
#include "Tree.h"

using namespace std;

int main() {
    Tree tree = Tree(new Node(1, nullptr, nullptr));
    if (tree.contains_multi(tree.get_head())) cout << "+";
    else cout << "-";
    if (tree.is_expression(tree.get_head())) cout << "+";
    else cout << "-";
    string expression;
    cin >> expression;

}
