
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include "utilities.hpp"

using namespace std;

int main()
{
    cout<<"Welcome to Online IDE!! Happy Coding :)";
    std::string str = "Not everything that can be counted counts. Not everything that counts can be counted.";
        

  std::map<std::string,unsigned int> result = WordFrequencyCounter(str);
  
  for (auto const& [key, value] : result) { 
     std::cout << key    << ':'    << value    << std::endl;
   }
   
    return 0;
}
