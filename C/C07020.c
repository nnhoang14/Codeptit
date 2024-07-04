#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pokemon{
  char ten[10000];
  int k,m,count;
}pk ;

int upgrade(pk a[], int i, int *sum, int *max, int *pos){
    scanf("%s",&a[i].ten);
    scanf("%d%d",&a[i].k,&a[i].m);
    a[i].count = 0;
    while (a[i].k<=a[i].m){
        a[i].count+=a[i].m/a[i].k;
        a[i].m=a[i].m%a[i].k+2*(a[i].m/a[i].k);
    }
    if(a[i].count> *max){
        *max=a[i].count;
        *pos = i;
    }
    *sum+=a[i].count;
}

int main()
{
    int n;
    scanf("%d",&n);
    pk a[n];
    int sum=0,max=0,pos=0;
    for(int i = 0; i < n; i++){
        upgrade(a,i,&sum,&max,&pos);
    }
    printf("%d\n%s\n",sum,a[pos].ten);
    for(int i = 0; i < n; i++)printf("%s %d\n",a[i].ten,a[i].count);
    return 0;
}