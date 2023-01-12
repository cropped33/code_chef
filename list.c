#include <stdio.h>
int main()
{
    int T, N, A[10];
    scanf("%d", &T);
    for (int a = 0; a < T; a++)
    {
        int count = 0;
        scanf("%d", &N);
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }
        int B[1];
        B[0] = A[0];
        //     for (int j = N - 1; j >= 0; j--)
        //     {
        //         if (j == N - 1)
        //         {
        //             if (B[0] == A[j])
        //             {
        //                 printf("0\n");
        //                 break;
        //             }
        //         }
        //        if(B[0]!=B[])
        //         if (j == 0)
        //         {
        //             printf("-1\n");
        //             break;
        //         }
        //         A[0] = A[0] * 10 + A[j];
        //         count++;
        //     }
        // }
        for (int j = 1; j < N; j++)
        {
            if (B[0] != A[j])
            {
                A[0] = A[0] * 10 + A[j];
                count++;
                // if(B[0])
            }
            // if(B[0]==A[j]){
            //     continue;
            // }

        }
        return 0;
    }