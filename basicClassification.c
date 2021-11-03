#include "NumClass.h"
#include <math.h>
#include <stdio.h>

int factorial(int n){
    int i=1;
    int fact = 1;
    while (i<=n){
        fact *= i;
        i++;
    }
    return fact;
}

int isStrong(int n){
    int num = n;
    int fact=0;
    while (num>0){
        fact += factorial(num%10);
        num = num/10;
    }
    if (n==fact){
        return 1;
    }
    return 0;
}

int isPrime(int n){
    if (n==1) return 1;
    if (n==2) return 1;
    if (n%2==0) return 0;
	for (int i=3 ; i<=sqrt(n) ; i+=2) {
			if (n%i==0) {
				return 0;
			}
	}
	return 1;	
}