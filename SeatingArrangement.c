#include<stdio.h>
void main()
{
    int counter,i,number;
    scanf("%d",&counter);
    for(i=1;i<=counter;i++)
    {
        scanf("%d",&number);
        switch(number%12)
        {
        case 0:
            {

                printf("%d WS\n",number-11);
                break;
            }
        case 1:
            {
                printf("%d WS\n",number+11);
                break;
            }
        case 2:
            {
                printf("%d MS\n",number+9);
                break;
            }
        case 3:
            {
                printf("%d AS\n",number+7);
                break;
            }
        case 4:
            {
                printf("%d AS\n",number+5);
                break;
            }
        case 5:
            {
                printf("%d MS\n",number+3);
                break;
            }
        case 6:
            {
                printf("%d WS\n",number+1);
                break;
            }
        case 7:
            {
                printf("%d WS\n",number-1);
                break;
            }
        case 8:
            {
                printf("%d MS\n",number-3);
                break;
            }
        case 9:
            {
                printf("%d AS\n",number-5);
                break;
            }
        case 10:
            {
                printf("%d AS\n",number-7);
                break;
            }
        case 11:
            {
                    printf("%d MS\n",number-9);
                    break;
            }
        default:
            printf("You entered wrong seat number");
        }
    }
}
