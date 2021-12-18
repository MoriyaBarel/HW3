#include <stdio.h>
#include <string.h>
#include "ans.h"

#define TXT 1024
#define WORD 30

int main(){

char word[WORD+1] = {0};
char *p_word = word;
char txt[TXT+1] = {0};
char *p_txt = txt;

 scanf("%s", word);
    char c = 0;
    int i = 0;
    while (c != '~') {
        scanf("%c", &c);
        txt[i] = c;
        i++;
    }

gematria(p_word,p_txt,strlen(word),strlen(txt));
Atbash(p_word,p_txt,strlen(word),strlen(txt));
Anagram(p_word,p_txt,strlen(word),strlen(txt));

}