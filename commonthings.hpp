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

namespace commonthings {

    namespace userinput {
    //Ask User, references the variable
    void askUser(unsigned int& n, std::string msg);
    void askUser(long unsigned int& n, std::string msg);
    void askUser(long long unsigned int& n, std::string msg);

    void askUser(int& n, std::string msg);
    void askUser(long int& n, std::string msg);
    void askUser(long long int& n, std::string msg);

    void askUser(double& n, std::string msg);
    void askUser(long double& n, std::string msg);

    void askUser(float& n, std::string msg);

    void askUser(char& n, std::string msg);
    
    void askUser(std::string& n, std::string msg);
    }

    namespace bootest {
    //Test the eveness of a number, return true for even, false for odd
    bool isEven(unsigned int n);
    bool isEven(long unsigned int n);
    bool isEven(long long unsigned int n);

    bool isEven(int n);
    bool isEven(long int n);
    bool isEven(long long int n);
    }

}


#endif