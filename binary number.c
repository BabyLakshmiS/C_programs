#include <stdio.h>
int main()
{
    int n;
    printf("Input any decimal number: ");
    scanf("%d", &n);
    printf("The Binary value of decimal num %d is : ", n);
    int binaryNum[100];
    int i = 0;
    while (n > 0)
    {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    printf("%d",binaryNum[j]);
    return 0;
}
