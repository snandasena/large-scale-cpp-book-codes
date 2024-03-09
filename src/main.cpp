#include "format_utils.h"
#include <iostream>
#include <cassert>
#include <cctype>

double calculateLineCost(int numTrailingSpaces)
{
    assert(0 <= numTrailingSpaces);
    double t = numTrailingSpaces;
    return t * t * t;
}

int loadWord(std::string *result)
{
    assert(result);

    char c = ' ';
    while (std::cin && isspace(c))
    {
        std::cin.get(c);
    }

    if (!std::cin)
    {
        return -1;
    }

    result->clear();
    while (std::cin && !std::isspace(c))
    {
        result->push_back(c);
        std::cin.get(c);
    }

    return 0;
}


int main()
{
    const int lineLength = 79;
    std::vector<std::string> words;
    std::vector<int> wordLengths;

    std::string word;
    while (0 == loadWord(&word))
    {
        words.push_back(word);
        wordLengths.push_back(word.length() + 1);
    }

    std::vector<int> partition;
    FormatUtils::calculateOptimalPartition(&partition, wordLengths, lineLength + 1, calculateLineCost);

    int i = 0;
    int partitionIndex = 0;
    partition.push_back(words.size());

    while (partitionIndex < partition.size())
    {
        while (i < partition[partitionIndex] - 1)
        {
            std::cout << words[i++] << std::endl;
            ++partitionIndex;
        }
    }

    return 0;
}
