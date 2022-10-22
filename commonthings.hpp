/* 
+-----------------------------------------------------------------------------------+
| * This file is part of the CommonThings library                                   |
| * Copyright (c) 2022 Paqueriaud Baptiste.                                         |
| *                                                                                 |
| * This program is free software: you can redistribute it and/or modify            |
| * it under the terms of the GNU General Public License as published by            |
| * the Free Software Foundation, version 3.                                        |
| *                                                                                 |
| * This program is distributed in the hope that it will be useful, but             |
| * WITHOUT ANY WARRANTY; without even the implied warranty of                      |
| * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU                |
| * General Public License for more details.                                        |
| *                                                                                 |
| * You should have received a copy of the GNU General Public License               |
| * along with this program. If not, see <http://www.gnu.org/licenses/>.            |
+-----------------------------------------------------------------------------------+
*/

#ifndef _COMMONTHINGS_HPP_
#define _COMMONTHINGS_HPP_

#include <iostream>
#include <string>
#include <vector>

namespace commonthings {

    namespace userinput {
    //Ask User, references the variable
        void askUser(unsigned int& n, std::string msg); //Reference to variable, string to ask, optional error message
        void askUser(long unsigned int& n, std::string msg); //Reference to variable, string to ask, optional error message
        void askUser(long long unsigned int& n, std::string msg); //Reference to variable, string to ask, optional error message

        void askUser(int& n, std::string msg); //Reference to variable, string to ask, optional error message
        void askUser(long int& n, std::string msg); //Reference to variable, string to ask, optional error message
        void askUser(long long int& n, std::string msg); //Reference to variable, string to ask, optional error message

        void askUser(double& n, std::string msg); //Reference to variable, string to ask, optional error message
        void askUser(long double& n, std::string msg); //Reference to variable, string to ask, optional error message

        void askUser(float& n, std::string msg); //Reference to variable, string to ask, optional error message

        void askUser(char& n, std::string msg); //Reference to variable, string to ask, optional error message
        
        void askUser(std::string& n, std::string msg); //Reference to variable, string to ask, optional error message
    }

    namespace bootest {
    
        bool isEven(unsigned int n); //Test the eveness of a number, return true for even, false for odd
        bool isEven(long unsigned int n); //Test the eveness of a number, return true for even, false for odd
        bool isEven(long long unsigned int n); //Test the eveness of a number, return true for even, false for odd

        bool isEven(int n); //Test the eveness of a number, return true for even, false for odd
        bool isEven(long int n); //Test the eveness of a number, return true for even, false for odd
        bool isEven(long long int n); //Test the eveness of a number, return true for even, false for odd
    }
    
    namespace calculation {
        double average(const double t[], int size); //Returns the averages of the content of an array of double
        double average(const int t[], int size); //Returns the averages of the content of an array of int
        double average(const std::vector<int> t); //Returns the averages of the content of a vector of int
        double average(const std::vector<double> t); //Returns the averages of the content of a vector of double
    }
}

#endif
