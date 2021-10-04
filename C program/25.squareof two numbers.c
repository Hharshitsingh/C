// Addition of two numbers
#include<stdio.h>
main()
{
    char another='y';
    int num;
    printf("Here's the program for the addition of two numbers");
    for(;another=='y';)
    {
        printf("Enter a number:");
        scanf("%d",&num);
        num=num*num;
        printf("square is %d\n",num);
        printf("want to enter another number:");
        fflush(stdin);
        scanf("%c",&another);
    }
}
