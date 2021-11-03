#include <stdio.h>

int main()
{
    int T;
    int N;
    int M[400][400];
    int inv;

    scanf("%d", &T);
    if (T < 1 || T > 100)
        return 1;

    for (int q = 0; q < T; q++)
    {
        inv = 0;

        scanf("%d", &N);
        if (N < 1 || N > 20)
            return 1;

        for (int x = 0; x < N; x++)
        {
            for (int y = 0; y < N; y++)
            {
                scanf("%d", &M[x][y]);
                if (M[x][y] < 1 || M[x][y] > 1000)
                    return 1;
            }
        }

        for (int x = 0; x < N; x++)
        {
            for (int y = 0; y < N; y++)
            {
                for (int w = x; w < N; w++)
                {
                    for (int z = y; z < N; z++)
                    {
                        if (M[x][y] > M[w][z])
                           inv++;
                    }
                }
            }
        }
        printf("%d\n", inv);
    }
    return 0;
}
