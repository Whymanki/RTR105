#include <stdio.h>
int main() {
    char type, fac1, fac2, res1;
    int i,n, fac3, fac4, res2;
    long long fac5, fac6, res3;
    printf("Enter the data type to use(char(c) / int(i) / long long(l)):\n");
    scanf("%c",&type);
    printf("Enter one natural number:\n");
    scanf("%d",&n);
    if(type=='c')
    {
    i = 1;
    fac1 = 1;
    fac2 = 1;
    res1 = 1;
        while(i<=n)
            {   
                fac1 = res1;
                res1 = res1 * i;
                fac2 = res1/i;
                i+=1;
                if(fac1==fac2)
                {  
                    continue;
                }
                else
                {
                    printf("Value of factorial of entered number with selected data type is not possible\n");
                    return 0;
                }
            }
            printf("%3d! = %c\n",i-1,res1);
    }
    else if(type=='i')
    {
    i = 1;
    fac3 = 1;
    fac4 = 1;
    res2 = 1;
        while(i<=n)
            {   
                fac3 = res2;
                res2 = res2 * i;
                fac4 = res2/i;
                i+=1;
                if(fac3==fac4)
                {  
                    continue;
                }
                else
                {
                    printf("Value of factorial of entered number with selected data type is not possible\n");
                    return 0;
                }
            }
            printf("%3d! = %3d\n",i-1,res2);
    }
    else if(type=='l')
    {     
    fac5 = 1;
    fac6 = 1;
    res3 = 1;
    i=1;
            while(i<=n)
            {   
                fac5 = res3;
                res1 = res3 * i;
                fac6 = res3/i;
                i+=1;
                if(fac5==fac6)
                {  
                    continue;
                }
                else
                {
                    printf("Value of factorial of entered number with selected data type is not possible\n");
                    return 0;
                }
            }
            printf("%3d! = %lld\n",i-1,res3); 
    }
    return 0;
}
