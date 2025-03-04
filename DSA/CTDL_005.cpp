//https://code.ptit.edu.vn/beta/problems/CTDL_005
//XÓA DỮ LIỆU TRONG DSLK ĐƠN

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