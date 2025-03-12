//https://code.ptit.edu.vn/student/question/DSA06009
//CẶP SỐ TỔNG BẰNG K

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

typedef struct Node* node;

node makeNode(int x){
    node tmp = new Node();
    tmp -> data = x;
    tmp -> next = NULL;
    return tmp;
}

int main(){
    node head = new Node();
    return 0;
}