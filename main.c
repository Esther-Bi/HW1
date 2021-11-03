#include "NumClass.h"
#include <math.h>
#include <stdio.h>

int main(){
    int a;
    int b;
    scanf("%d %d" , &a , &b);
    if (b<a){
        int temp = a;
        a=b;
        b=temp;
    }
    printf("\nThe Armstrong numbers are:");
    for (int i=a ; i<=b ; i++){
        if (isArmstrong(i)==1) printf(" %d" , i);
    }
    printf("\nThe Palindromes are:");
    for (int i=a ; i<=b ; i++){
        if (isPalindrome(i)==1) printf(" %d" , i);
    }
    printf("The Prime numbers are:")
    for (int i=a ; i<=b ; i++){
        if (isPrime(i)==1) printf(" %d" , i);
    }
    printf("\nThe Strong numbers are:");
    for (int i=a ; i<=b ; i++){
        if (isStrong(i)==1) printf(" %d" , i);
    }
    printf("\n");


}