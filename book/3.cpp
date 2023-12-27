#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <regex>

using namespace std;

int print_options()
{
    std::cout << " 0 CONST0" << std::endl;
    std::cout << " 1 NOR" << std::endl;
    std::cout << " 2 NOTIMPLIES" << std::endl;
    std::cout << " 3 X" << std::endl;
    std::cout << " 4 NOTREVIMPLIES" << std::endl;
    std::cout << " 5 Y" << std::endl;
    std::cout << " 6 EOR" << std::endl;
    std::cout << " 7 NAND" << std::endl;
    std::cout << " 8 AND" << std::endl;
    std::cout << " 9 ENOR" << std::endl;
    std::cout << " 10 Y'" << std::endl;
    std::cout << " 11 REVIMPLIES" << std::endl;
    std::cout << " 12 X'" << std::endl;
    std::cout << " 13 IMPLIES" << std::endl;
    std::cout << " 14 OR" << std::endl;
    std::cout << " 15 CONST1" << std::endl;
    return 0;
}


int output_logic_table(std::string input_seq)
{
    int response, x, y, i, j, o, t;
    if (input_seq == "CONST0")
    { o = 0;}
    else if (input_seq == "CONST1")
    { o = 15;}
    else if (input_seq == "NOR")
    { o = 8;}
    else if (input_seq == "OR")
    { o = 7;}
    else if (input_seq == "X")
    { o = 3;}
    else if (input_seq == "Y")
    { o = 5;}
    else if (input_seq == "X-")
    { o = 12;}
    else if (input_seq == "Y-")
    { o = 10;}
    else if (input_seq == "EOR")
    { o = 6;}
    else if (input_seq == "ENOR")
    { o = 9;}
    else if (input_seq == "IMPLIES")
    { o = 13;}
    else if (input_seq == "NOTIMPLIES")
    { o = 2;}
    else if (input_seq == "REVIMPLIES")
    { o = 11;}
    else if (input_seq == "NOTREVIMPLIES")
    { o = 4;}
    else if (input_seq == "NAND")
    { o = 14;}
    else if (input_seq == "AND")
    { o = 1;}
    else if (input_seq == "PRINT")
    { print_options(); return 0;}
    else
    { return 0;}



    int results[16][4] = 
    {
        {0,0,0,0}, // 0 CONST0
        {0,0,0,1}, // 1 AND
        {0,0,1,0}, // 2 NOTIMPLIES
        {0,0,1,1}, // 3 X
        {0,1,0,0}, // 4 NOTREVIMPLIES
        {0,1,0,1}, // 5 Y
        {0,1,1,0}, // 6 EOR
        {0,1,1,1}, // 7 OR
        {1,0,0,0}, // 8 NOR
        {1,0,0,1}, // 9 ENOR
        {1,0,1,0}, // 10 Y'
        {1,0,1,1}, // 11 REVIMPLIES
        {1,1,0,0}, // 12 X'
        {1,1,0,1}, // 13 IMPLIES
        {1,1,1,0}, // 14 NAND
        {1,1,1,1}, // 15 CONST1
    };
    // std::cout << input_seq.length() << std::endl;
    std::cout << " x  y | o " << std::endl;
    std::cout << "------|---" << std::endl;
    
    for (i = 0; i <= 3; i++)
    {
        switch(i)
        {
            case 0:
                x=0;y=0;
                break;
            case 1:
                x=0;y=1;
                break;
            case 2:
                x=1;y=0;
                break;
            case 3:
                x=1;y=1;
                break;
            default:
                break;
        }
        t = results[o][i];


        std::cout << " " << x << "  " << y << " | " << t << std::endl;
    }

    return 1;
}

int main() 
{
	int response;
	std::string sequence;
    sequence = "ok";
    while(sequence != "END")
    {
        std::getline(std::cin, sequence);
       
        response = output_logic_table(sequence);
    }
}
