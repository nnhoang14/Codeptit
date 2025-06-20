#include <stdio.h>
#include <string.h>
void input_array(int a,int b, int arr[]){
    for(int i=a;i<b;i++){
        scanf("%d",&arr[i]);
    }
}

void sw(int *a, int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

void arrange_array(char c,int a,int b,int arr[]){
    int len=a+b;
    if(c=='F')output(0,len,arr);
    else if(c=='A'){
        output(a,len,arr);
        output(0,a,arr);
    }
    else{
        for(int i=0;i<len;i++){
            for(int j=0;j<len;j++){
                if(c=='T'&&arr[i]<arr[j])sw(&arr[i],&arr[j]);
                else if(c=='G'&&arr[i]>arr[j])sw(&arr[i],&arr[j]);
            }
        }
        output(0,len,arr);
    }
}

void output(int a,int b,int arr[]){
    for(int i=a;i<b;i++){
        printf("%d ",arr[i]);
    }
}

int main() {
    int Testcase;
    scanf("%d",&Testcase);
    while (Testcase--)
    {
        int m,n;
        char ch[100],c;
        scanf("%d%d%s",&m,&n,&ch);
        int len=strlen(ch);
        for (int i=0;i<len; i++)
        {
            if(ch[i]!=' '){
                c=ch[i];
                break;
                }
        }
        int arr_result[n+m-1];
        input_array(0,m,arr_result);
        input_array(m,m+n,arr_result);
        arrange_array(c,m,n,arr_result);
        printf("\n");
    }
    return 0;
}