#include <stdio.h>
#include <string.h>

bool findMostCommonChar(const char* words, char& winner)
{
    const int kAsciiCount = 128;
    if (words == NULL)
    {
        return false;
    }
    size_t length = strlen(words);
    int counts[kAsciiCount] = {};
    for (size_t i=0;i<length;i++)
    {
        counts[words[i]]++;
    }

    int winnerCount = 0;
    for (size_t i=0;i<kAsciiCount;i++)
    {
        if (counts[i] > winnerCount)
        {
             winnerCount = counts[i];
             winner = i;
        }   
    }

    return true;
}

void test(const char* words)
{
    char winner;
    if (findMostCommonChar(words, winner))
    {
        printf("The most common char is: %c.\n", winner);
    }
    else
    {
        printf("Invalid input.\n");
    }  
}

int main()
{
    test("hello world, it's a longlonglonglonglonglonglong long journey to the west world!");
    test("WTF WTF, it's a longlongjourneywestworldwestworldwestworldwestworldwest worldto the west world!");
    test("Vincent MMMMMMM,it'salonglongjourneytothewest world!");
    test("!");
    test(NULL);
    test(nullptr);
    test("测试通过");

    return 0;
}
