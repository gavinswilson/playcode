#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <regex>

using namespace std;

int check_light(std::string input_seq)
{
    int response;
    std::string s;
    std::regex e,f;
    s = input_seq;
    //e = "[0][1]([0][0][1])+[0][1]";
    e = "(01)(001)+(01)";
    f = "(0110)+(111)";
    // 01(001)*01 + 0110*111

    if (std::regex_match(s,e))
    {
        response = 1;
    }
    else if (std::regex_match(s,f))
    {
        response = 1;
    }
    else
    {
        response = 0;
    }
    return response;
}

int main() {
	
	std::string sequence;

    std::cin >> sequence;
    
    int response;

    response = check_light(sequence);

    if (response == 1)
    {
        std::cout << "Light on" << std::endl;
    }
    else
    {
       std::cout << "Light off" << std::endl;
    }

}
