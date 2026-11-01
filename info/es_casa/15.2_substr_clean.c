#include <stdbool.h>
#include <stdio.h>


unsigned int tl_str_len(char* s) {
    unsigned int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

bool substrAtPos(char* haystack, int pos, char* needle) {
    int hl = tl_str_len(haystack);
    int nl = tl_str_len(needle);

    if (pos < 0 || pos + nl > hl) {
        return false;
    }

    for (int i = 0; i < nl; i++) {
        if (haystack[pos + i] != needle[i]) {
            return false;
        }
    }

    return true;
}

int findsubStr(char* s, char* subStr) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (substrAtPos(s, i, subStr)) {
            return i;
        }
    }
    return -1;
}

int main(void) {
    char* text = "ma alberto";


    printf("substrAtPos(\"%s\", 3, \"albe\") -> %s\n", text, substrAtPos(text, 3, "albe") ? "true" : "false");
    printf("substrAtPos(\"%s\", 0, \"albe\") -> %s\n", text, substrAtPos(text, 0, "albe") ? "true" : "false");

    printf("findsubStr(\"%s\", \"albe\") -> %d\n", text, findsubStr(text, "albe"));
    printf("findsubStr(\"%s\", \"ber\") -> %d\n", text, findsubStr(text, "ber"));
    printf("findsubStr(\"%s\", \"xyz\") -> %d\n", text, findsubStr(text, "xyz"));

    return 0;
}