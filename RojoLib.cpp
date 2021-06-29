#include <iostream>
#include <sstream>
#include <string> 
#include <vector>

//Split a string by a character
std::vector<std::string> split(std::string s, char splitAt) {
    std::string word;
    std::vector<std::string> splitString;
    for (auto x : s) {
        if (x == splitAt) {
            if (word != "") { splitString.push_back(word); }
            word = "";
        }
        else { word += x; }
    }
    if (word != "") { splitString.push_back(word); }
    word = "";
    return splitString;
}

//Strip a string of a character
std::string strip(std::string s, char toStrip) {
    std::string newString;
    for (auto x : s) {
        if (x != toStrip) { newString += x; }
    }
    return newString;
}

//Replace a character in a string
std::string replace(std::string s, char toReplace, std::string replaceWith) {
    std::string newString;
    for (auto x : s) {
        if (x == toReplace) { newString += replaceWith; }
        else { newString += x; }
    }
    return newString;
}

//Converts int to string
std::string toString(int i) {
    std::string s;
    std::stringstream ss;
    ss << i;
    ss >> s;
    return s;
}

//Converts string to int
int toInt(std::string s) {
    int i;
    std::stringstream ss;
    ss << s;
    ss >> i;
    return i;
}

//Reverses string
std::string reverse(std::string s) {
    std::string sReverse;
    for (int i = s.size() - 1; i > -1; i--) {
        sReverse += s[i];
    }
    return sReverse;
}