#include <stdio.h>

void sw(int *a, int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

void arrange_cmatrix(int cmatrix[], int len,int s){
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(s==1){
                if(cmatrix[i]>cmatrix[j]){
                    sw(&cmatrix[i],&cmatrix[j]);
                    }
                }
            else {
                if(cmatrix[i]<cmatrix[j]){
                    sw(&cmatrix[i],&cmatrix[j]);
                    }
                }
        }
    }
}

void input_cmatrix(int cmatrix[],int len,int s){
    for(int i=0;i<len;i++){
        scanf("%d",&cmatrix[i]);
    }
    arrange_cmatrix(cmatrix,len,s);
}

void output_cmatrix(int cmatrix_f[],int cmatrix_s[],int len){
    int postion=0;
    while (postion<len*2){
        if(postion%2==0){
            printf("%d ",cmatrix_f[postion/2]);
        }
        else printf("%d ",cmatrix_s[postion/2]);
        postion++;
    }
}


int main() {
    int Testcase,step=1;
    scanf("%d",&Testcase);
    while (Testcase--)
    {
        int len;
        scanf("%d",&len);
        printf("Test %d:\n",step);
        int cmatrix_f[len],cmatrix_s[len];
        input_cmatrix(cmatrix_f,len,1);
        input_cmatrix(cmatrix_s,len,0);
        output_cmatrix(cmatrix_f,cmatrix_s,len);
        printf("\n");
        step++;
    }
    
    return 0;
}