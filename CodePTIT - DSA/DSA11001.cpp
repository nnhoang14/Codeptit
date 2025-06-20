//https://code.ptit.edu.vn/student/question/DSA11001
//CÂY BIỂU THỨC 1

#include <bits/stdc++.h>
using namespace std;

struct Node {
    string val;
    Node *left, *right;
    Node(string val){
        this->val = val;
        this->left = this->right = NULL;
    }
};

bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

Node* buildTree(const string& s) {
    stack<Node*> st;
    for (char c : s) {
        if (isOperator(c)) {
            Node* right = st.top(); st.pop();
            Node* left = st.top(); st.pop();
            Node* op = new Node(string(1, c));
            op->left = left;
            op->right = right;
            st.push(op);
        } else {
            st.push(new Node(string(1, c)));
        }
    }
    return st.top();
}

void printInorder(Node* root) {
    if (!root) return;
    printInorder(root->left);
    cout << root->val;
    printInorder(root->right);
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        Node* root = buildTree(s);
        printInorder(root);
        cout << endl;
    }
    return 0;
}
