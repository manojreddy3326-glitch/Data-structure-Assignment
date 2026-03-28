#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch)
{
    top = top + 1;
    stack[top] = ch;
}

char pop()
{
    char ch;
    ch = stack[top];
    top = top - 1;
    return ch;
}

int main()
{
    char str[100];
    int i;

    printf("Enter string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        push(str[i]);
    }

    printf("Reversed string: ");
    while(top != -1)
    {
        printf("%c", pop());
    }

    return 0;
}