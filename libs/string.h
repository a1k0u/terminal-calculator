#pragma once

typedef struct Str {
    char* word;
    int len;
} STR;

STR* init_str();
STR* del_str(STR* str);
STR* push_char(STR* str, char symb);
STR* strip_str(STR* str, char symb);
int compare_str(STR* str1, STR* str2);
void print_str(STR* string);
STR* input_str();
