#include <stdio.h>

void sw(int *a,int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

void input_array(int array[],int size){
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
}

void arrange_array(int array[],int size){
    for(int i=0;i<size-1;i++){
        int min=array[i],pos=i;
        for(int j=i+1;j<size;j++){
            if(min>array[j]){
                min=array[j];
                pos=j;
            }
        }
        if(pos!=i)sw(&array[i],&array[pos]);
        output_array(array,size);
        printf("\n");
    }
}

void output_array(int array[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
}

int main(){
    int size,array[100];
    scanf("%d",&size);
    input_array(array,size);
    arrange_array(array,size);
    return 0;
}