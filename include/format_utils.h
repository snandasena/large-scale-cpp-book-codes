#ifndef FORMAT_UTILS_H
#define FORMAT_UTILS_H

#include <vector>


struct FormatUtils
{
    typedef double (*CostFunction)(int);

    static void calculateOptimalPartition(std::vector<int> *result,
                                          const std::vector<int> &wordLengths,
                                          int lineLength,
                                          CostFunction costFunction);


};

#endif // FORMAT_UTILS_H
