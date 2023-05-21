#ifndef UTILITIES_HPP
#define UTILITIES_HPP

#include <map>
#include <string>
#include <vector>


std::map<std::string,unsigned int> WordFrequencyCounter(std::string str);
std::vector<std::string> SplitWords(std::string str);
std::string RemovePunc(std::string str);

#endif
