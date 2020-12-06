#include <stdio.h>
#include <stdlib.h>

int main()
{
 int N;
 scanf("%d", &N);
 int array[N];
 for (int i = 0; i < N; ++i)
    {
 scanf("%d", &array[i]);
    }

 for(int i = 0; i < N; ++i)
    {
 int a = array[i];
 if(a==0)
            continue;

        for(int j = i+1; j < N; ++j)
        {
            if(array[j]==a)
            {
                for (int k = j; k < N - 1; ++k)
                    array[k] = array[k + 1];
                array[N-1]=0;
                j=j-1;
            }
        }
    }

    for (int i = 0; i < N; ++i)
        printf("%d ", array[i]);
    return 0;
}
