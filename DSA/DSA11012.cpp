//https://code.ptit.edu.vn/student/question/DSA11012
//CÂY NHỊ PHÂN BẰNG NHAU

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

bool checkSame(Node* root, Node* root_s) {
    if(root == NULL && root_s == NULL) return true;
    if(root != NULL && root_s != NULL && root->data == root_s->data)
        return checkSame(root->left, root_s->left) && checkSame(root->right, root_s->right);
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Node* root = NULL;
        while(n--) {
            int u, v;
            char c;
            cin >> u >> v >> c;
            if (root == NULL) {
                root = new Node(u);
            }
            Insert(root, u, v, c);
        }
        
        int m;
        cin >> m;
        Node* root_s = NULL;
        while(m--) {
            int u, v;
            char c;
            cin >> u >> v >> c;
            if (root_s == NULL) {
                root_s = new Node(u);
            }
            Insert(root_s, u, v, c);
        }
        cout << (checkSame(root, root_s) ? 1 : 0) << endl;
    }
    return 0;
}