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
        
        void askUser(unsigned int& n, std::string msg, const std::string error="Invalid input"); //Reference to variable, string to ask, optional error message
        void askUser(long unsigned int& n, std::string msg, const std::string error="Invalid input"); //Reference to variable, string to ask, optional error message
        void askUser(long long unsigned int& n, std::string msg, const std::string error="Invalid input"); //Reference to variable, string to ask, optional error message

        void askUser(int& n, std::string msg, const std::string error="Invalid input"); //Reference to variable, string to ask, optional error message
        void askUser(long int& n, std::string msg, const std::string error="Invalid input"); //Reference to variable, string to ask, optional error message
        void askUser(long long int& n, std::string msg, const std::string error="Invalid input"); //Reference to variable, string to ask, optional error message

        void askUser(double& n, std::string msg, const std::string error="Invalid input"); //Reference to variable, string to ask, optional error message
        void askUser(long double& n, std::string msg, const std::string error="Invalid input"); //Reference to variable, string to ask, optional error message

        void askUser(float& n, std::string msg, const std::string error="Invalid input"); //Reference to variable, string to ask, optional error message

        void askUser(char& n, std::string msg, const std::string error="Invalid input"); //Reference to variable, string to ask, optional error message
        
        void askUser(std::string& n, std::string msg, const std::string error="Invalid input"); //Reference to variable, string to ask, optional error message
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
        double average(const double t[], int size); //Returns the average of the content of an array of double
        double average(const int t[], int size); //Returns the average of the content of an array of int
        double average(const float t[], int size); //Returns the average of the content of an array of float
        
        double average(const long t[], int size); //Returns the average of the content of an array of long int
        double average(const long long t[], int size); //Returns the average of the content of an array of long long int
        
        double average(const unsigned int t[], int size); //Returns the average of the content of an array of unsigned int
        double average(const unsigned long t[], int size); //Returns the average of the content of an array of unsigned long int
        double average(const unsigned long long t[], int size); //Returns the average of the content of an array of unsigned long long int
        
        
        double average(const std::vector<int> t); //Returns the average of the content of a vector of int
        double average(const std::vector<double> t); //Returns the average of the content of a vector of double
        
        double average(const std::vector<long> t); //Returns the average of the content of an vector of long int
        double average(const std::vector<long long> t); //Returns the average of the content of an vector of long long int
        
        double average(const std::vector<unsigned> t); //Returns the average of the content of an vector of unsigned int
        double average(const std::vector<unsigned long> t); //Returns the average of the content of an vector of unsigned long int
        double average(const std::vector<unsigned long long> t); //Returns the average of the content of an vector of unsigned long long int
    }

    namespace armanip {
        //Fonctions used to manipulate arrays
        unsigned int popBack(unsigned int tab[], size_t& n); //Removes the last item of an array
        long unsigned int popBack(long unsigned int tab[], size_t& n); //Removes the last item of an array
        long long unsigned int popBack(long long unsigned int tab[], size_t& n); //Removes the last item of an array

        int popBack(int tab[], size_t& n); //Removes the last item of an array
        long int popBack(long int tab[], size_t& n); //Removes the last item of an array
        long long int popBack(long long int tab[], size_t& n); //Removes the last item of an array

        double popBack(double tab[], size_t& n); //Removes the last item of an array
        long double popBack(long double tab[], size_t& n); //Removes the last item of an array

        float popBack(float tab[], size_t& n); //Removes the last item of an array

        char popBack(char tab[], size_t& n); //Removes the last item of an array

        std::string popBack(std::string tab[], size_t& n); //Removes the last item of an array


        unsigned int popFront(unsigned int tab[], size_t& n); //Removes the first item of an array
        long unsigned int popFront(long unsigned int tab[], size_t& n); //Removes the first item of an array
        long long unsigned int popFront(long long unsigned int tab[], size_t& n); //Removes the first item of an array

        int popFront(int tab[], size_t& n); //Removes the first item of an array
        long int popFront(long int tab[], size_t& n); //Removes the first item of an array
        long long int popFront(long long int tab[], size_t& n); //Removes the first item of an array

        double popFront(double tab[], size_t& n); //Removes the first item of an array
        long double popFront(long double tab[], size_t& n); //Removes the first item of an array

        float popFront(float tab[], size_t& n); //Removes the first item of an array

        char popFront(char tab[], size_t& n); //Removes the first item of an array

        std::string popFront(std::string tab[], size_t& n); //Removes the first item of an array

    }
}

#endif
