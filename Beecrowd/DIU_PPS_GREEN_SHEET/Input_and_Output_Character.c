// problem link:https://judge.beecrowd.com/en/problems/view/2759
// Author: arsakib299

#include <stdio.h>

int main()
{
     char A,B,C;
    scanf(" %c",&A);
    scanf(" %c",&B);
    scanf(" %c",&C);
    printf("A = %c, B = %c, C = %c\n",A,B,C);
    printf("A = %c, B = %c, C = %c\n",B,C,A);
    printf("A = %c, B = %c, C = %c\n",C,A,B);

    return 0;
}