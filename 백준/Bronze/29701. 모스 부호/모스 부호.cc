#include <stdio.h>
#include <string.h>
char change(char *s) {
    if (strcmp(s, ".-") == 0) return 'A';
    if (strcmp(s, "-...") == 0) return 'B';
    if (strcmp(s, "-.-.") == 0) return 'C';
    if (strcmp(s, "-..") == 0) return 'D';
    if (strcmp(s, ".") == 0) return 'E';
    if (strcmp(s, "..-.") == 0) return 'F';
    if (strcmp(s, "--.") == 0) return 'G';
    if (strcmp(s, "....") == 0) return 'H';
    if (strcmp(s, "..") == 0) return 'I';
    if (strcmp(s, ".---") == 0) return 'J';
    if (strcmp(s, "-.-") == 0) return 'K';
    if (strcmp(s, ".-..") == 0) return 'L';
    if (strcmp(s, "--") == 0) return 'M';
    if (strcmp(s, "-.") == 0) return 'N';
    if (strcmp(s, "---") == 0) return 'O';
    if (strcmp(s, ".--.") == 0) return 'P';
    if (strcmp(s, "--.-") == 0) return 'Q';
    if (strcmp(s, ".-.") == 0) return 'R';
    if (strcmp(s, "...") == 0) return 'S';
    if (strcmp(s, "-") == 0) return 'T';
    if (strcmp(s, "..-") == 0) return 'U';
    if (strcmp(s, "...-") == 0) return 'V';
    if (strcmp(s, ".--") == 0) return 'W';
    if (strcmp(s, "-..-") == 0) return 'X';
    if (strcmp(s, "-.--") == 0) return 'Y';
    if (strcmp(s, "--..") == 0) return 'Z';
    if (strcmp(s, ".----") == 0) return '1';
    if (strcmp(s, "..---") == 0) return '2';
    if (strcmp(s, "...--") == 0) return '3';
    if (strcmp(s, "....-") == 0) return '4';
    if (strcmp(s, ".....") == 0) return '5';
    if (strcmp(s, "-....") == 0) return '6';
    if (strcmp(s, "--...") == 0) return '7';
    if (strcmp(s, "---..") == 0) return '8';
    if (strcmp(s, "----.") == 0) return '9';
    if (strcmp(s, "-----") == 0) return '0';
    if (strcmp(s, "--..--") == 0) return ',';
    if (strcmp(s, ".-.-.-") == 0) return '.';
    if (strcmp(s, "..--..") == 0) return '?';
    if (strcmp(s, "---...") == 0) return ':';
    if (strcmp(s, "-....-") == 0) return '-';
    if (strcmp(s, ".--.-.") == 0) return '@';
}
int main(){
    int N;
    scanf("%d", &N);
    char s[10];
    for (int i = 0; i < N; i++) {
        scanf("%s", s);
        printf("%c", change(s));
    }
    printf("\n");
    return 0;
}
