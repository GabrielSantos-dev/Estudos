#include<stdio.h>

long fun_log2(long num)
{
      if(num==1)
           return 0;
      return 1 + fun_log2(num/2);
}

int main()
{
        long num, base;
        long i,t;

        scanf("%d", &t);
        long re[t];

        for(i=0; i<t; i++){
            scanf("%d",&num);
            re[i] = fun_log2(num);
        }
        for(i=0; i<t; i++){
            printf("%d\n", re[i]);
        }
        return 0;
}
