#include "NumClass.h"
#include <math.h>
#include <stdio.h>

int isArmstrong(int n){
    int num = n , sum = 0 ;
    if (n==0){
        return 0;
    }
    int length = (int) (log10(n)+1);
    while (num>0){
        sum += (int) pow(num%10,length);
        num = num/10;
    }
    if (sum == n){
        return 1;
    }
    return 0;
}

int isPalindrome(int n){
    int length = (int) (log10(n)+1);
    int div = (int)pow(10,length-1);
    int first , num = n;
    for (int i=0 ; i<length/2 ; i++){
        first = num/div;
        if(first != num%10){
            return 0;
        }
        num -= first*div;
        div = div/100;
        num = num/10;
    }
    return 1;
}