#include <stdio.h>

long long factorial(int n){
    long long result=1;
    for(int i=1;i<=n;i++){
        result*=i;
    }
    return result;
}

int main() {
	int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int number=factorial(i)/(factorial(j)*factorial(i-j));
            if(number!=0)printf("%d ", number);
        }
        printf("\n");
    }
	return 0;
}