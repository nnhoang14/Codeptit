//https://code.ptit.edu.vn/student/question/DSA11008
//KIỂM TRA NODE LÁ

#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(NULL), right(NULL){}
};

void Insert(Node* root, int val, int v, char c) {
    if(root == NULL) return;
    if(root->data == val){
        if(c == 'L') root->left = new Node(v);
        else root->right = new Node(v);
    } else { 
        Insert(root->left, val, v, c);
        Insert(root->right, val, v, c);
    }
}

int countLeaf(Node* root) {
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 1;
    return countLeaf(root->left) + countLeaf(root->right);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Node* root = NULL;
        for(int i = 0; i < n; i++) {
            int u, v;
            char c;
            cin >> u >> v >> c;
            if (root == NULL) {
                root = new Node(u);
            }
            Insert(root, u, v, c);
        }
        cout << (countLeaf(root->left) == countLeaf(root->right) ? 1 : 0) << endl;
    }
    return 0;
}