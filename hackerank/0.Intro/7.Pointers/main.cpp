#include <iostream>
#include <stdio.h>
#include <cmath>

void update(int *a,int *b) {
    int tmp_a, tmp_b;
    tmp_a = *a + *b;
    tmp_b =  std::abs(*a - *b);

    *a = tmp_a;
    *b = tmp_b;  
}

int main() {

    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);

    printf("%d\n%d", *pa, *pb);

    return 0;
}