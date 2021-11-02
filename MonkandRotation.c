#include <stdio.h>

int main()
{
    int T;
    int N;
    int K;
    int A[1000000];
    int p;

    scanf("%d", &T);
    for (int x = 0; x < T; x++)
    {
        scanf("%d %d", &N, &K);
        for (int y = 0; y < N; y++)
        {
            scanf("%d", &A[y]);
        }

        K%=N;

        for (int z = 0; z < N; z++)
        {
            p = A[(z+(N-K))%N];
            printf("%d ",p);
        } 
        
        printf("\n");
    }
    return 0;
}
