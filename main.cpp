//
//  main.cpp
//  homework8
//
//  Created by Mac on 2019/3/15.
//  Copyright © 2019年 Mac. All rights reserved.
//

#include "stdio.h"
#include "stdlib.h"
int main()
{
 int n ,a ;
 printf("請輸入數字: ");
 scanf("%d",&a);
    for(int i=2;i<=a;i++)
{
    n = 0;
        for(int j=1;j<=i;j++)
            if(i%j==0)
                n++;
    if(n==2)
        printf("%d\t",i);
}
    printf("\n");
    system("Pause");
    return 0;
}
