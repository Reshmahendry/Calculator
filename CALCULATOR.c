#include<stdio.h>
void main()
{
    int a,b;
    char oper;
    printf(" Enter numbers:");
    scanf("%d%d",&a,&b);
    printf("enter operation:");
    scanf(" %c",&oper);
    switch(oper)
    {
    case '+':
        printf("sum=%d",a+b);
        break;
    case '-':
        printf("diff=%d",a-b);
        break;
    case 'x':
        printf("pdt=%d",a*b);
        break;
    case '/':
        if(a==0||b==0)
        {
            printf("wrong input");
        }
        else
            {printf("div=%d",a/b);}
        break;
    default:
        printf("wrong operator");
    }
}
