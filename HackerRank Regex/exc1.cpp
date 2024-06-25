#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <regex>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string input;
    smatch match;
    regex r("hackerrank");
    
    getline(cin, input);
    int i = 0;
    while(regex_search(input, match, r))
    {
        i++;
        input = match.suffix().str();
    }
    cout << "Number of matches : " << i;
    return 0;
}
