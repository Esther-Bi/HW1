#include "NumClass.h"
#include <math.h>
#include <stdio.h>

int isArmstrongRecu(int n , int sum ,int power , int curr , int length){
    if (length == 1) {
        if (sum + (int)pow(curr,power)==n) return 1;
        else return 0;
    }
    sum = sum+(int)pow(curr%10,power);
    curr = curr/10;
    length = length-1 ;
    return isArmstrongRecu(n , sum , power , curr , length);
}

int isArmstrong(int n){
    int power = (int) (log10(n)+1);
    int length = power;
    return isArmstrongRecu(n , 0 , power ,n , length);
}

int reverse(int n){
    int digit = (int)log10(n);
    if(n == 0) return 0;
    return ((n%10 * pow(10, digit)) + reverse(n/10));
}

int isPalindrome(int n){
    if(n == reverse(n)) return 1;
    return 0;
}
