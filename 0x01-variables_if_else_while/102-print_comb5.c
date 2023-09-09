njndjnknd

jdjdhjxhjhxxhhc]j
jhchhchccc
jjcjjcjcjcc
jcjcjcjcjcjcj
cjjcjcjcjc
jkcjcjcjcjcjc
jcjjcjjc]jcjhc
sjjsjsj
djdjdjdjjdjdjd
jdjjdjdjdjdj#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i <= 99; i++) {
        for (j = i; j <= 99; j++) {
            // Calculate the tens and ones digits for the first number
            int num1_tens = i / 10;
            int num1_ones = i % 10;

            // Calculate the tens and ones digits for the second number
            int num2_tens = j / 10;
            int num2_ones = j % 10;

            // Print the combination in ascending order
            putchar(num1_tens + '0');
            putchar(num1_ones + '0');
            putchar(' ');
            putchar(num2_tens + '0');
            putchar(num2_ones + '0');
            putchar(',');

            // Print a space after the comma, except for the last combination
            if (!(i == 99 && j == 99)) {
                putchar(' ');
            }
        }
    }

    return 0;
}
