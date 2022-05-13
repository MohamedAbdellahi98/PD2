#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stdio.h>
void reverse(char *s){
    char tmp;
    char *word_begin = s;
    char *begin, *end;
    char *temp = s;

    while (*temp) {
        temp++;
        if (*temp == '\0') {
            begin = word_begin;
            end = temp - 1;
            while (begin < end) {
                tmp = *begin;
                *begin++ = *end;
                *end-- = tmp;
            }
        }
        else if (*temp == ' ') {
            begin = word_begin;
            end = temp - 1;
            while (begin < end) {
                tmp = *begin;
                *begin++ = *end;
                *end-- = tmp;
            }
            word_begin = temp + 1;
        }
    }

    begin = s;
    end = temp - 1;
    while (begin < end) {
        tmp = *begin;
        *begin++ = *end;
        *end-- = tmp;
    }
}

// Driver Code
int main()
{
    char s[] = "i like this program very much";
    char* temp = s;
    reverse(s);
    printf("%s", s);
    return 0;
}
