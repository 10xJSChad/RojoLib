#include <string> 
#include <vector>

#ifndef ROJOLIB_H    // To make sure you don't declare the function more than once by including the header multiple times.
#define ROJOLIB_H

std::vector<std::string> split(std::string s, char splitAt);
std::string strip(std::string s, char toStrip);

#endif