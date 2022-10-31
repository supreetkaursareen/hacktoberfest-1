//Problem statement

/*Write a function to create right angled triangle of N starts*/

#include <stdio.h>
// print right angled triange of stars
void pattern(int n) {
    int i, j;
    for ( i = 0 ; i < n+1; i++) {
        for ( j = 0; j < i;j++){
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("enter n: ");  //Enter input
    scanf("%d", &n);
    pattern(n);
    return 0;
}

//Output
/*
enter n: 5
*
**
***
****
*****
*/
