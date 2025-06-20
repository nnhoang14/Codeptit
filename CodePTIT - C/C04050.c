#include <stdio.h>
#include <stdlib.h>

int giao[1001], cnt1[1001], cnt2[1001];
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
     int a[n], b[m];
    //int *a = (int *)malloc(n * sizeof(int));
    //int *b = (int *)malloc(m * sizeof(int));
    
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        giao[a[i]] = 1;
        cnt1[a[i]] = 1;
    }

    for (int i = 0; i < m; i++){
        scanf("%d", &b[i]);
        cnt2[b[i]] = 1;
        if (giao[b[i]] == 1)
            giao[b[i]] = 2;
    }

    for (int i = 1; i < 1001; i++){
        if (giao[i] == 2)
            printf("%d ", i);
    }
    printf("\n");

    for (int i = 1; i < 1001; i++)
        if (cnt1[i] != 0 && cnt2[i] == 0)
            printf("%d ", i);
    printf("\n");

    for (int i = 1; i < 1001; i++)
        if (cnt1[i] == 0 && cnt2[i] != 0)
            printf("%d ", i);

    //free(a);
    //free(b);
}
