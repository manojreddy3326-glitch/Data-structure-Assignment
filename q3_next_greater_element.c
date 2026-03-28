#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int x)
{
    top = top + 1;
    stack[top] = x;
}

int pop()
{
    int x;
    x = stack[top];
    top = top - 1;
    return x;
}

int main()
{
    int arr[100], n, i, next;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    push(arr[0]);

    for(i = 1; i < n; i++)
    {
        next = arr[i];

        while(top != -1 && stack[top] < next)
        {
            printf("%d -> %d\n", pop(), next);
        }

        push(next);
    }

    while(top != -1)
    {
        printf("%d -> -1\n", pop());
    }

    return 0;
}