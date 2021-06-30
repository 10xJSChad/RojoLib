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

//Reverse int vector
std::vector<int> reverse(std::vector<int> v, int a = 0, bool fromRight = false) {
    if (a == 0) {
        a = v.size() - 1;
        for (int i = 0; i < v.size() / 2; i++) {
            int temp = v[a]; v[a] = v[i]; v[i] = temp; a--;
        }
        return v;
    }
    else {
        if (!fromRight) {
            a--; int max = a / 2; if (a == 2) { max = a; }
            for (int i = 0; i < a; i++) {
                int temp = v[a]; v[a] = v[i]; v[i] = temp; a--;
            }
            return v;
        }
        else {
            a--; int max = v.size() - 1;
            for (int i = max - a; i < max; i++) {
                int temp = v[max]; v[max] = v[i]; v[i] = temp; max--;
            }
            return v;
        }
    }
    return v;
}