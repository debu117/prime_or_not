#include<stdio.h>
int main()
{
    int n=456,i=2,prime=1; //prime=1 means prime is call prime number.
    while(i<n){
        if(n%i==0){                 //using while loop.
            prime=0;
            break;
        }
        i++;
    }
    if(prime==0){
        printf("This is not a prime number");
    }else{
        printf("This is a prime number");
    }
return 0;
}
