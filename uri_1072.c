#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,x,in = 0,out = 0;
    scanf("%d",&n);
    for(i = 0; i<n; i++){
        scanf("%d",&x);
        if(x >= 10 && x <= 20){
            in++;
        }
        else{
            out ++;
        }
    }
    printf("%d in\n%d out\n",in,out);
    return 0;
}