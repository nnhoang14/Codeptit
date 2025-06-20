#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sinhvien{
  int ma;
  char ten[10000];
  char sn[10000];
  double m1,m2,m3,sum;
};
typedef struct sinhvien sv;

void nhap(sv *a){
    getchar();
    gets(a->ten);
    gets(a->sn);
    scanf("%lf%lf%lf",&a->m1,&a->m2,&a->m3);
}

void in(sv a){
    printf("%d %s %s %.1f\n",a.ma,a.ten,a.sn,a.sum);
}

int cmp(const void *a, const void *b){
    sv *x= (sv*)a;
    sv *y= (sv*)b;
    return x->sum < y->sum;
} 

int main()
{
    int n;
    scanf("%d",&n);
    sv a[n];
    for(int i = 0; i < n; i++){
        nhap(&a[i]);
        a[i].ma= i + 1;
        a[i].sum = a[i].m1 + a[i].m2 + a[i].m3;
    }
    qsort(a,n,sizeof(sv),cmp);
    double max=a[0].sum;
    for(int i = 0; i < n; i ++){
        if(a[i].sum==max)in(a[i]);
    }
    return 0;
}