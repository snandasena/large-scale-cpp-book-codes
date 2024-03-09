//
// Created by sajit on 09/03/2024.
//

#include "format_utils.h"

#include <cassert>

namespace
{
    struct Context
    {
        const std::vector<int> &d_wordLengths;
        int d_lineLength;
        FormatUtils::CostFunction d_costFunction;

        Context(const std::vector<int> &wordLengths, int lineLength, FormatUtils::CostFunction costFunction)
                : d_wordLengths(wordLengths), d_lineLength(lineLength), d_costFunction(costFunction) {}
    };
}

static double minCostl(std::vector<int> *result, int a, int b, const Context &context)
{
    assert(result);
    assert(0 <= a);
    assert(a <= b);
    assert(b < context.d_wordLengths.size());:wq

    double resultCost;
    result->clear();

}