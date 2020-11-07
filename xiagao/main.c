//
//  main.c
//  shuzu
//
//  Created by 杨森乔 on 2020/10/22.
//

#include <stdio.h>
#define NUM 100
void math(int interager[],int num,int sum);
int main(void)
{
    int num,d;
label: printf("Please input a number:");//19没有溢出
    d=scanf(" %d",&num);
    if(d==0)
    {
        printf("do again!\n");
        if(getchar()!='\n')
            goto label;
    }
    int interager[NUM]={0};
    interager[0]=1;
    for(int i=1;i<=num;i++)
    {
        for(int e=0;e<=(NUM-1);e++)
        {
            interager[e]=interager[e]*i;
        }
        for(int e=0;e<=(NUM-2);e++)
        {
            if(interager[e]>=10)
            {
                int temp,diss;
                temp=interager[e];
                interager[e]=interager[e]%10;
                diss=(temp-interager[e])/10;
                interager[e+1]+=diss;
            }
        }
    }
    for(int a=(NUM-1);a>=0;a--)
        printf("%d",interager[a]);
    printf("\n");
    return 0;
}
