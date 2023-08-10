#include<stdio.h>
int main()
{
    int age = 25;
    if (age >= 18)
        printf("You are an adult");
    else
        printf("You are a minor");
    return 0;
}
int main()
{
    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
            break;

        printf("%d",i);
    }
    return 0;
}
int main()
{
    int a = 10;
    int b = 20;
    if (a > b)
        printf("True");
    else
        printf("False");
    return 0;
}
