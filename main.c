#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 100

int writeStringToBuffer(const char* string, int x, int y) {
    char buffer[BUFFER_SIZE]; // 문자열을 저장할 배열

    // 문자열 복사
    strcpy(buffer, string);

    // 배열의 특정 위치에 문자열 삽입
    int index = y * x + x;
    int bufferLength = strlen(buffer);
    if (index + bufferLength > BUFFER_SIZE) {
        // 배열의 크기를 초과하는 경우 오류 처리
        return -1;
    }
    memmove(buffer + index + bufferLength, buffer + index, BUFFER_SIZE - index - bufferLength);
    memcpy(buffer + index, string, bufferLength);

    // 삽입 후의 문자열을 출력
    printf("%s\n", buffer);

    return 0; // 성공적으로 문자열을 삽입한 경우
}

int main() {
    const char* str = "Hello, World!";
    int x = 3;
    int y = 2;
    writeStringToBuffer(str, x, y);

    return 0;
}


