#include <math.h>
#include <stdio.h>
int main(){
    int i,n,c,k,x;
    double a,b,s;
    printf("input n");
    scanf("%d",&n);
    b=1; s=0;
    int counting;
    counting=0;
    x=1;
    for(i=1; i<=n; i++){
        x=x*4;
        a=(x-i);
        b=b*(i+cos(i));
        s=s+(a/b);
        counting=counting+7;
    }
    printf(" your result %.7lf \n",s);
    printf("the number of operation is %d\n",counting);

    return 0;

}
