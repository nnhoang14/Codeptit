#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mathang{
  int ma;
  char hang[10000];
  char nhom[10000];
  double gm,gb,ln;
};
typedef struct mathang mt;

void nhap(mt *a){
    getchar();
    gets(a->hang);
    gets(a->nhom);
    scanf("%f%f",a->gm,a->gb);
}

void in(mt a){
    printf("%d %s %s %.2f\n",a.ma,a.hang,a.nhom,a.ln);
}

int cmp(const void *a, const void *b){
    mt *x= (mt*)a;
    mt *y= (mt*)b;
    if(x->ln > y->ln)return -1;
    else return 1;
} 

int main()
{
    int n;
    scanf("%d",&n);
    mt a[n];
    for(int i = 0; i < n; i++){
        nhap(&a[i]);
        a[i].ma=i+1;
        a[i].ln=a[i].gb-a[i].gm;
    }
    qsort(a,n,sizeof(mt),cmp);
    for(int i = 0; i < n; i ++)in(a[i]);
    return 0;
}