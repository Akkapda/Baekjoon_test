#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 2;
    while(true) {
        if (n % answer == 1) {
            break;
        } else answer++;
    }
    return answer;
}