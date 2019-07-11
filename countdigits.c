#include <stdio.h>
void main()
{
    int count=0,input;
    scanf("%d",&input);
    while(input>0)
    {
        count++;
        input/=10;
    }
    printf("%d",count);
}
