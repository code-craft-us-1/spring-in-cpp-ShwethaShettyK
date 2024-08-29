#include "stats.h"

#include <numeric>

#include <algorithm>


using namespace std;

Statistics::Stats Statistics::ComputeStatistics(const std::vector<double>&stats ) {
    //Implement statistics here
    Stats s;
    double sum = std::accumulate(stats.begin(), stats.end(), 0.0);
    s.average = static_cast<double>( sum/stats.size());
    s.min = *std::min_element(stats.begin(), stats.end());
    s.max = *std::max_element(stats.begin(), stats.end());
    return s;
     
}


