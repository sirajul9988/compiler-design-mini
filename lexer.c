#include <stdio.h>
#include <ctype.h>

int main() {
    char code[] = "int a = 10;";
    int i = 0;

    printf("Lexical Analysis Output:\n");

    while (code[i] != '\0') {
        if (isalpha(code[i])) {
            printf("Identifier: %c\n", code[i]);
        } else if (isdigit(code[i])) {
            printf("Number: %c\n", code[i]);
        } else if (code[i] == '=') {
            printf("Operator: =\n");
        } else if (code[i] == ';') {
            printf("Delimiter: ;\n");
        }
        i++;
    }

    return 0;
}
