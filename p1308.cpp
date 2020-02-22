#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

int main()
{

    string word = "", str = "", point = "";
    int firstPos = 0, result = 0;
    bool flag = false, isFirst = false;

    getline(cin, word); // 只读4096个字符，运气不好就分配到一个10000+的测试点
    getline(cin, str);

    str = ' ' + str + ' '; // 前后各补一个空格方便直接校验
    word = ' ' + word + ' ';
    // 大小写统一
    for (int i = 0; i < word.size(); i++)
        word[i] = tolower(word[i]);
    for (int i = 0; i < str.size(); i++)
        str[i] = tolower(str[i]);

    for (int i = 0; i < str.size() - word.size(); i++)
    {
        for (int j = 0; j < word.size(); j++)
            point[j] = str[j + i];
        flag = true;
        for (int j = 0; j < word.size(); j++)
        {
            if (point[j] != word[j])
            {
                flag = false;
            }
        }
        if (flag)
        {
            result++;
            if (!isFirst)
            {
                firstPos = i;
                isFirst = true;
            }
        }
    }

    if (result != 0)
        printf("%d %d",result,firstPos);
    else
        printf("-1");
    system("pause");
    return 0;
}