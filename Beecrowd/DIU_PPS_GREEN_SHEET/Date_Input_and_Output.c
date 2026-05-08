// problem link:https://judge.beecrowd.com/en/problems/view/2764
// Author: arsakib299

#include <stdio.h>

int main()
{

 int DD,MM,YY;
 scanf("%d/%d/%d",&DD,&MM,&YY);
 
 printf("%02d/%02d/%02d\n",MM,DD,YY);
 printf("%02d/%02d/%02d\n",YY,MM,DD);
 printf("%02d-%02d-%02d\n",DD,MM,YY);

    return 0;
}