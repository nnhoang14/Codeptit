//https://code.ptit.edu.vn/student/question/CPP0516
//SẮP XẾP DANH SÁCH MẶT HÀNG

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef struct MatHang{
    int id;
    string name;
    string type;
    double cost;
    double price;
    double profit;
} MG;

void nhap(MG *a, int n){
    for(int i = 0; i < n; i++){
        cin.ignore();
        a[i].id = i + 1;
        getline(cin, a[i].name);
        getline(cin, a[i].type);
        cin >> a[i].cost >> a[i].price;
        a[i].profit = a[i].price - a[i].cost;
    }
}

void sapxep(MG *a, int n){
    for(int i = 0; i < n - 1 ; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i].profit < a[j].profit) swap(a[i],a[j]);
        }
    }
}

void in(MG *a, int n){
    for(int i = 0; i < n; i++){
        cout << a[i].id << " " << a[i].name << " " << a[i].type << " " << fixed << setprecision(2) << a[i].profit;
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    MG a[n];
    nhap(a, n);
    sapxep(a,n);
    in(a, n);
    return 0;
}