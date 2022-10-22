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

#include "commonthings.hpp"

namespace commonthings {
    
    namespace userinput {
        //Ask User, references the variable
        void askUser(unsigned int& n, std::string msg) {
            std::cout << msg << "> ";
            std::cin >> n;
        }
        void askUser(long unsigned int& n, std::string msg) {
            std::cout << msg << "> ";
            std::cin >> n;
        }
        void askUser(long long unsigned int& n, std::string msg) {
            std::cout << msg << "> ";
            std::cin >> n;
        }

        void askUser(int& n, std::string msg) {
            std::cout << msg << "> ";
            std::cin >> n;
        }
        void askUser(long int& n, std::string msg) {
            std::cout << msg << "> ";
            std::cin >> n;
        }
        void askUser(long long int& n, std::string msg) {
            std::cout << msg << "> ";
            std::cin >> n;
        }

        void askUser(double& n, std::string msg){ 
            std::cout << msg << "> ";
            std::cin >> n;
        }
        void askUser(long double& n, std::string msg) {
            std::cout << msg << "> ";
            std::cin >> n;
        }

        void askUser(float& n, std::string msg) {
            std::cout << msg << "> ";
            std::cin >> n;
        }

        void askUser(char& n, std::string msg) {
            std::cout << msg << "> ";
            std::cin >> n;
        }
        
        void askUser(std::string& n, std::string msg) {
        std::cout << msg << "> ";
        std::cin >> n;
    }
    }

    namespace booltest {
    //Test the eveness of a number, return true for even, false for odd
    bool isEven(unsigned int n) {
        bool even = false;
        (n%2==0)?even=true:even=false;

        return even;
    }

    bool isEven(long unsigned int n) {
                bool even = false;
        (n%2==0)?even=true:even=false;
        
        return even;
    }

    bool isEven(long long unsigned int n) {
                bool even = false;
        (n%2==0)?even=true:even=false;
        
        return even;
    }

    bool isEven(int n) {
                bool even = false;
        (n%2==0)?even=true:even=false;
        
        return even;
    }
    bool isEven(long int n) {
                bool even = false;
        (n%2==0)?even=true:even=false;
        
        return even;
    }
    bool isEven(long long int n) {
                bool even = false;
        (n%2==0)?even=true:even=false;
        
        return even;
    }
    }
    
    namespace calculation {
    
        double average(double t[], int size) {
            double sum = 0;
            
            for (for int i = 0; i < size: ++i)
                sum += tab[i];

            return sum / (double)size;
        }
        
        double average(int t[], int size) {
            double sum = 0;
            
            for (int i = 0; i < size; ++i)
                sum += t[i];

            return sum / size;
        }
        
        double average(std::vector<int> t) {
            double sum = 0;
            
            for (int &i : t)
                sum += i;

            return sum / t.size();
        }
        
        double average(std::vector<double> t) {
            double sum = 0;
            
            for (double &i : t)
                sum += i;

            return sum / t.size();
        }
}
