#include <cctype>
#include <string>
#include <vector>
#include <map>
#include<iostream>

#include "utilities.hpp"

// write your definition of WordFrequencyCounter in this source file.
std::vector<std::string> SplitWords(std::string str)
{
    std::vector<std::string> out;
    std:: string substr = "";
    for(char x:str) {
        if(x==' ') {
            out.push_back(substr);
            substr = "";
        } else {
            substr = substr + x;
        }
    }
    out.push_back(substr);
    return out;
}

std::string RemovePunc(std::string str){
    std::string out;
    for(char x:str){
        switch(x){
            case '.':break;
            case '!':break;
            case ',':break;
            default: out+=x;
        }
    }
    return out;
}

std::map<std::string,unsigned int> WordFrequencyCounter(std::string str){
    std::string strlower = "";
    for(char c : str){
        strlower += tolower(c);
    }
    str = strlower;
    std::map<std::string,unsigned int> out;
    std::vector<std::string> a = SplitWords(RemovePunc(str));
    
    for(std::string x:a){
        out[x] += 1;
    }
    return out;
