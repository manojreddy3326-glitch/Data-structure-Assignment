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

void pop()
{
    top = top - 1;
}

int main()
{
    char exp[100];
    int i, flag = 1;

    printf("Enter expression: ");
    scanf("%s", exp);

    for(i = 0; exp[i] != '\0'; i++)
    {
        if(exp[i] == '(')
            push(exp[i]);
        else if(exp[i] == ')')
        {
            if(top == -1)
            {
                flag = 0;
                break;
            }
            pop();
        }
    }

    if(top != -1)
        flag = 0;

    if(flag == 1)
        printf("Balanced Expression");
    else
        printf("Not Balanced Expression");

    return 0;
}