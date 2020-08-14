#include <stdio.h>

int runner() {
    static int count = 0;
    count++;
    return count;
}

int sum (int num) {
    static int sum_t = 0;
    sum_t += num;
    return sum_t;
}

int main() {
    printf("%d\n",runner());
    printf("%d\n",runner());

    printf("%d ",sum(55));
    printf("%d ",sum(45));
    printf("%d \n",sum(50));
    return 0;
}
