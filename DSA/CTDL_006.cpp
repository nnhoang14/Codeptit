//https://code.ptit.edu.vn/beta/problems/CTDL_006
//LỌC DỮ LIỆU TRÙNG TRONG DSLK ĐƠN

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


int Size(node a){
    int cnt = 0;
    while (a != NULL){
        cnt ++;
        a = a -> next;
    }
    return cnt;
}

void insertLast(node &a, int x){
    node tmp = makeNode(x);
    if(a == NULL) a = tmp;
    else {
        node p = a;
        while (p -> next != NULL){
            p = p -> next;
        }
        p -> next = tmp;
    }
}

void deleteNum(node &a, int x){
    node tmp = a;
    while (tmp != NULL && tmp -> next != NULL) {
        if (tmp -> next -> data == x) {
            tmp -> next = tmp -> next -> next;
        } else {
            tmp = tmp -> next;
        }
    }
}

void screenNum(node &a){
    node tmp = a;
    while (tmp != NULL){
        deleteNum(tmp, tmp -> data);
        tmp = tmp -> next;
    }
}

void in(node a){
    while (a != NULL){
        cout << a -> data << " ";
        a = a -> next;
    }
}

int main(){
    int n;
    cin >> n;
    node head = NULL;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        insertLast(head, x);
    }
    screenNum(head);
    in(head);
    return 0;
}