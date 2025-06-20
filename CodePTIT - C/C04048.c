#include <stdio.h>

void lightarea(int street[], int len, int k, int pos){
    for (int i = pos-1; i < pos+k; i++){
        if(i<len)street[i]++;
    }
    for (int i = pos-2; i >= pos-1-k; i--){
        if(i>=0)street[i]++;
    }
}

void addlight(int street[], int len,int k){
    int add=0,area=2*k+1,nolight=0;
    for (int i = 0; i < len; i++)
    {
        if(street[i]==0)nolight++;
        if(street[i]==0 && street[i+1]>0 || i==len-1 && street[i]==0){
            if(nolight%area==0)add+=nolight/area;
            else add+=nolight/area+1;
            nolight=0;
        }
    }
    printf("%d",add);
}

int main(){
    int len,m,k;
    scanf("%d %d %d",&len,&m,&k);
    int a[1000],street[1000]={0};
    for (int i = 0; i < m; i++){
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < m; i++){
        lightarea(street,len,k,a[i]);
    }
    addlight(street,len,k);
}
