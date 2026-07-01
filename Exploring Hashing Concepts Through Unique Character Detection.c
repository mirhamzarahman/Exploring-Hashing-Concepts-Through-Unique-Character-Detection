#include <stdio.h>

int main() {
    char s[101];
    int visited[26] = {0};
    int count = 0;

    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        int index = s[i] - 'a';

        if (visited[index] == 0) {
            visited[index] = 1;
            count++;
        }
    }

    if (count % 2 == 0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");

    return 0;
}
