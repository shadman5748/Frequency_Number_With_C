#include<stdio.h>

/*

  0     3      1      2    1    0   3  3

    3121033

    Last Digit = User Input % 10
    Last Digit Remove = User Input / 10

    arr[10]

    arr[0] = 0 + 1 =  1
    arr[1] = 0 + 1 + 1 = 2
    arr[2] = 0 + 1  = 1
    arr[3] = 0 + 1 + 1 + 1 = 3
    arr[4] = 0 = 0




*/

int main()

{
    long long int num, n, LastDigit;
    int arr[10], i;

    printf("Enter your Digit: "); // 35782
    scanf("%lld", &num);

    n = num;

    for ( i=0 ; i<10 ; i++ )
    {
        arr[i] = 0;
    }

    while (n != 0)
    {
        LastDigit = n % 10 ;                    // 35782 % 10 = 2     ..  3578 % 10 = 8
        arr[LastDigit] = arr[LastDigit] + 1 ;   // arr[2] = 0 + 1   .. arr[8] = 0 + 1
        n = n / 10 ;                            // 35782 / 10 = 3578 /10 3    5  7

    }

    for (i=0; i<10; i++)
    {
        if(arr[i] > 0)
        {
            printf("%d ----> %d\n", i, arr[i]);  // 0 ---> 1
        }

    }


}













