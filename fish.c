#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void growFish(int* width, int* height) {
    // 크기를 늘리기
    *width += 10;
    *height += 5;

    // 크기 제한
    if (*width > 30 || *height > 10) {
        printf("물고기가 너무 커졌어요!\n");

        if (*width > 50 || *height > 20) {
            printf("성장성공!\n");
        }
    }
}

void drawFish(int width, int height) {
    // 무작위로 물고기가 죽는 확률 추가
    double randomValue = (double)rand() / RAND_MAX; // 0과 1 사이의 난수 생성
    double deathProbability = 0.09; // 죽을 확률 (0.09 = 9%)

    // 물고기 그리기
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == height / 2 && j == width / 2)
                printf("@"); // 몸통
            else if (j == width - 1)
                printf(">"); // 꼬리
            else
                printf("*"); // 머리와 비늘
        }
        printf("\n");
    }

    if (randomValue < deathProbability) {
        printf("물고기가 죽었습니다.\n");
        printf("게임을 종료하시겠습니까? (y/n): ");
        char input;
        scanf(" %c", &input);

        if (input == 'y') {
            exit(0);
        }
    }
}

int main() {
    int width = 10;
    int height = 5;

    printf("물고기 키우기 게임\n");

    char input;
    printf("물고기를 키우시겠습니까? (y/n): ");
    scanf(" %c", &input);

    if (input == 'y') {
        growFish(&width, &height);
        printf("물고기의 크기: %d x %d\n", width, height);
        drawFish(width, height);
    }

    while (1) {
        printf("물고기를 계속 키우시겠습니까? (y/n): ");
        scanf(" %c", &input);

        if (input == 'y') {
            growFish(&width, &height);
            printf("물고기의 크기: %d x %d\n", width, height);
            drawFish(width, height);
        }
        else if (input == 'n') {
            printf("게임을 종료합니다.\n");
            break;
        }
    }

    return 0;
}