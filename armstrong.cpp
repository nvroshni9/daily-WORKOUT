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
 temp=x;
    while(temp){
        int a=temp%10;
        sum+=power(a,D);
        std::cout<<"sum"<<sum;
        temp=temp/10;
    }
    
    std::cout<<sum;
    if (sum==x)
        return 1;
    else
        return 0;
    
    
    
}
    
    


int main()
{
    int x,y;
    std::cin>>x;
    
    y=isArmstrong(x);
    if (y==0)
    printf("not armstrong");
    else
    printf("armstrong");
    
}
