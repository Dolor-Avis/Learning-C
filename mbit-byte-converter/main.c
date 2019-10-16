#include <stdio.h>
#include <limits.h>

void main(){
    unsigned long long int size_in_bytes, mbit_size, out;
    size_in_bytes = 125000;

    printf("Enter an size in megabits: ");
    scanf("%lld", &mbit_size);
    out = (mbit_size * size_in_bytes);

    if(out >= LLONG_MAX){
        printf("Size is too big try smaller value\n");
    }else
    {
        printf("Size in bytes: %lld\n",out);
    }
    
}