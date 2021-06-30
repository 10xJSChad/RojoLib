#include <string> 
#include <vector>

#ifndef ROJOLIB_H
#define ROJOLIB_H

std::vector<std::string> split(std::string s, char splitAt);
std::string strip(std::string s, char toStrip);
std::string replace(std::string s, char toReplace, std::string replaceWith);
std::string toString(int i);
std::string reverse(std::string s);
int toInt(std::string s);
std::vector<int> reverse(std::vector<int> v, int a = 0, bool fromRight = false);

#endif