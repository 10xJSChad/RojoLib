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
