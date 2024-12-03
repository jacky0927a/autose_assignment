#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    srand(time(0));
    number = rand() % 100 + 1; // Generate a random number between 1 and 100

    printf("숫자 맞추기 게임에 오신 것을 환영합니다!\n");
    printf("1부터 100 사이의 숫자를 맞춰보세요.\n");

    do {
        printf("숫자를 입력하세요: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("너무 큽니다. 더 작은 숫자를 입력하세요.\n");
        } else if (guess < number) {
            printf("너무 작습니다. 더 큰 숫자를 입력하세요.\n");
        } else {
            printf("축하합니다! %d번 만에 숫자를 맞추셨습니다.\n", attempts);
        }
    } while (guess != number);

    return 0;
}