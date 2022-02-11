#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    switch (num > 0)
    {
        
        case 1:
            printf("the number is positive %d", num);
        break;
        case 0:
            switch (num < 0)
            {
                case 1: 
                    printf("the number is negative %d", num);
                    break;
                case 0:
                    printf("The number is zero  %d", num);
                    break;
            }
        break;
    }
    return 0;
}