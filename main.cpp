#include <iostream>
#include "Tree.h"

using namespace std;

int main() {
    string str, temp;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') temp += str[i];
    }
    str = temp;
    Tree tree = Tree(str);
    tree.display();
    if (tree.is_expression()) {
        cout << endl;
        cout << tree.count();
        if (tree.contains_multi()) cout << "+";
        else cout << "-";
        if (tree.is_expression()) cout << "+";
        else cout << "-";
    }
    else cout << "Not expression";
}
