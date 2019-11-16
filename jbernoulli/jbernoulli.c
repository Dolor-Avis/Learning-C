#include <stdio.h>
#include <math.h>

long long int powerll(long long int, long long int y);
void print_results(int y, int s);

int main(int argc, char const *argv[]){
    for (int i = 1; i<=10; i++){
    print_results(i,calculate_sum(5050));
    }
}

extern long long int calculate_sum(int y){
    long long int result = 0;
    for(int i = 0; i <= 1000; i++){
    result += powerll(i,y);
    }
    return result;
}

long long int powerll(long long int x, long long int y){
    return (long long) powl(x, y);
}

void print_results(int y, int s){
    printf("1^%-1d + 2^%-1d + ... + 1000^%-1d = %-1d\n", y, y, y, s);
}
