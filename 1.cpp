#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;



int main() {
	
	int width = 150; //number of characters fitting horizontally on my screen 
	int heigth = 40; //number of characters fitting vertically on my screen
		
    double corna,cornb, side,x,y,c;
    int q;

    std::cin >> corna;
    std::cin >> cornb;
    std::cin >> side;
    
    // corna = 2;
    // cornb = 5;
    // side = 3;
	string char_ = "\u2588";

	string black = "\033[22;30m";
	string red = "\033[22;31m";
	string l_red = "\033[01;31m";
	string green = "\033[22;32m";
	string l_green = "\033[01;32m";
	string orange = "\033[22;33m";
	string yellow = "\033[01;33m";
	string blue = "\033[22;34m";
	string l_blue = "\033[01;34m";
	string magenta = "\033[22;35m";
	string l_magenta = "\033[01;35m";
	string cyan = "\033[22;36m";
	string l_cyan = "\033[01;36m";
	string gray = "\033[22;37m";
	string white = "\033[01;37m";

	for (int i = 0; i < heigth; i++) {
		for (int j = 0; j < width; j++) {
			
			x = corna + i*side/100;
			y = cornb + j*side/100;
			
			c = trunc(x*x + y*y);
			q = int(c);
			if (q%3 ==0) 
            {cout << red << char_;}
			else if (q%3 == 1)
             {cout << yellow << char_;}
			else {cout << black << char_;}
			// else if (value > 30) {cout << yellow << char_;}
			// else if (value > 20) {cout << l_green << char_;}
			// else if (value > 10) {cout << green << char_;}
			// else if (value > 5) {cout << l_cyan << char_;}
			// else if (value > 4) {cout << cyan << char_;}
			// else if (value > 3) {cout << l_blue << char_;}
			// else if (value > 2) {cout << blue << char_;}
			// else if (value > 1) {cout << magenta << char_;}
			// else {cout << l_magenta << char_;}
			
			//cout << "\033[0m";
		}
		cout << endl;
	}

	return 0;
}
