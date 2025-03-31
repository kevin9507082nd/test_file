#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[5000];
    while (fgets(str, sizeof(str), stdin) != NULL) {//stdin
        int ans[3000];//input ans
        int num = 1;
        int i = 0;
        int j = strlen(str);
        int k = 0;

        while (k + 1 < j) {
            if (str[k] == str[k + 1]) { //a==a,num+1,k+1
                k++;
                num++;
            } else {//a!=b ,storage letter && num,clear num
                ans[i] = str[k];
                ans[i + 1] = num;
                i += 2;
                k++;
                num = 1;
            }
        }

        ans[i] = str[k]; //end of letter && num
        ans[i + 1] = num;

        for (int n = 0; n <= i; n += 2) { //output
            printf("%c%d ", ans[n], ans[n + 1]);
        }
        printf("\n");
    }
    return 0;
}
