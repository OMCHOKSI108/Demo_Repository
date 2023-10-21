#include <stdio.h>

void printNumber(int n) {
    const char* numberNames[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    if (n >= 0 && n <= 9) {
        printf("%s\n", numberNames[n]);
    } else if (n % 2 == 0) {
        printf("even\n");
    } else {
        printf("odd\n");
    }
}

int main() {
    int start, end;
    
    // Input the interval
    scanf("%d", &start);
    scanf("%d", &end);
    
    for (int i = start; i <= end; i++) {
        printNumber(i);
    }
    
    return 0;
}
