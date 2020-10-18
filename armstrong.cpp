#include <stdio.h>
#include<iostream>

int power(int x,unsigned int ord){
    if (ord==0)
        return 1;
    if(ord%2==0)
        return power(x,ord/2)*power(x,ord/2);
    else
        return x*power(x,ord/2)*power(x,ord/2);
    }



int order(int x)
{   
    int n=0;
    while(x){
        n++;
        x=x/10;
        
    
    }
    return n;
}
    
    
int isArmstrong(int x){
    
    int D,sum=0,temp;
    D=order(x);
