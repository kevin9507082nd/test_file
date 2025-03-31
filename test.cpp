#include <iostream>
#include <string>

int main()
{
    std::string str;
    while (std::getline(std::cin, str)) {
        int ans[3000]; //input ans
        int num = 1;
        int i = 0;
        int j = str.length();
        int k = 0;

        while (k + 1 < j) {
            if (str[k] == str[k + 1]) { //a==a,num+1,k+1
                k++;
                num++;
            } else { //a!=b ,storage letter && num,clear num
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
            std::cout << static_cast<char>(ans[n]) << ans[n + 1] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
