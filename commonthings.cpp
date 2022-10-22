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

#include <limits>
#include "commonthings.hpp"

namespace commonthings {
    
    namespace userinput {
        void handleWrongInput(const std::string error) { //Used to handle wrong input
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << error << std::endl;
        }

        //Ask User, references the variable
        void askUser(unsigned int& n, std::string msg, const std::string error="Invalid input") { //Reference to variable, string to ask, optional error message
            while(true) {
                std::cout << msg << "> ";
                std::cin >> n;

                if(std::cin.fail())
                    handleWrongInput(error);
                else
                    break;
            }
        }
        void askUser(long unsigned int& n, std::string msg, const std::string error="Invalid input") { //Reference variable, string to ask, optional error message
            while(true) {
                std::cout << msg << "> ";
                std::cin >> n;

                if(std::cin.fail())
                    handleWrongInput(error);
                else
                    break;
            }
        }
        void askUser(long long unsigned int& n, std::string msg, const std::string error="Invalid input") { //Reference variable, string to ask, optional error message
            while(true) {
                std::cout << msg << "> ";
                std::cin >> n;

                if(std::cin.fail())
                    handleWrongInput(error);
                else
                    break;
            }
        }

        void askUser(int& n, std::string msg, const std::string error="Invalid input") { //Reference variable, string to ask, optional error message
            while(true) {
                std::cout << msg << "> ";
                std::cin >> n;

                if(std::cin.fail())
                    handleWrongInput(error);
                else
                    break;
            }
        }

        void askUser(long int& n, std::string msg, const std::string error="Invalid input") { //Reference variable, string to ask, optional error message
            while(true) {
                std::cout << msg << "> ";
                std::cin >> n;

                if(std::cin.fail())
                    handleWrongInput(error);
                else
                    break;
            }
        }

        void askUser(long long int& n, std::string msg, const std::string error="Invalid input") { //Reference variable, string to ask, optional error message
            while(true) {
                std::cout << msg << "> ";
                std::cin >> n;

                if(std::cin.fail())
                    handleWrongInput(error);
                else
                    break;
            }
        }

        void askUser(double& n, std::string msg, const std::string error="Invalid input") { //Reference variable, string to ask, optional error message
            while(true) {
                std::cout << msg << "> ";
                std::cin >> n;

                if(std::cin.fail())
                    handleWrongInput(error);
                else
                    break;
            }
        }
        void askUser(long double& n, std::string msg, const std::string error="Invalid input") { //Reference variable, string to ask, optional error message
            while(true) {
                std::cout << msg << "> ";
                std::cin >> n;

                if(std::cin.fail())
                    handleWrongInput(error);
                else
                    break;
            }
        }

        void askUser(float& n, std::string msg, const std::string error="Invalid input") { //Reference variable, string to ask, optional error message
            while(true) {
                std::cout << msg << "> ";
                std::cin >> n;

                if(std::cin.fail())
                    handleWrongInput(error);
                else
                    break;
            }
        }

        void askUser(char& n, std::string msg, const std::string error="Invalid input") { //Reference variable, string to ask, optional error message
            while(true) {
                std::cout << msg << "> ";
                std::cin >> n;

                if(std::cin.fail())
                    handleWrongInput(error);
                else
                    break;
            }
        }
        
        void askUser(std::string& n, std::string msg, const std::string error="Invalid input") { //Reference variable, string to ask, optional error message
            while(true) {
                std::cout << msg << "> ";
                std::cin >> n;

                if(std::cin.fail())
                    handleWrongInput(error);
                else
                    break;
            }
        }
    }

    namespace booltest {
    //Test the eveness of a number, return true for even, false for odd
        bool isEven(unsigned int n) {
            return (n%2==0);
        }

        bool isEven(long unsigned int n) {
            return (n%2==0);
        }

        bool isEven(long long unsigned int n) {
            return (n%2==0);
        }

        bool isEven(int n) {
            return (n%2==0);
        }

        bool isEven(long int n) {
            return (n%2==0);
        }
        
        bool isEven(long long int n) {
            return (n%2==0);
        }
    }
    
    namespace calculation {
    //All calculation functions
        double average(const double t[], int size) {
            double sum = 0;
            
            for (int i = 0; i < size; ++i)
                sum += t[i];
    
            return sum / (double)size;
        }
        
        double average(const int t[], int size) {
            double sum = 0;
            
            for (int i = 0; i < size; ++i)
                sum += t[i];
     
            return sum / size;
        }
        
        double average(const long  t[], int size) {
            double sum = 0;
            
            for (int i = 0; i < size; ++i)
                sum += t[i];
     
            return sum / size;
        }
        
        double average(const long long t[], int size) {
            double sum = 0;
            
            for (int i = 0; i < size; ++i)
                sum += t[i];
     
            return sum / size;
        }
                
        double average(const unsigned int t[], int size) {
            double sum = 0;
            
            for (int i = 0; i < size; ++i)
                sum += t[i];
     
            return sum / size;
        }

        double average(const unsigned long t[], int size) {
            double sum = 0;
            
            for (int i = 0; i < size; ++i)
                sum += t[i];
     
            return sum / size;
        }
        
        double average(const unsigned long long t[], int size) {
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
        
        double average(std::vector<long> t) {
            double sum = 0;
            
            for (long &i : t)
                sum += i;

            return sum / t.size();
        }
        
        double average(std::vector<long long> t) {
            double sum = 0;
            
            for (long long &i : t)
                sum += i;

            return sum / t.size();
        }
                
        double average(std::vector<unsigned int> t) {
            double sum = 0;
            
            for (unsigned &i : t)
                sum += i;

            return sum / t.size();
        }
        
        double average(std::vector<unsigned long> t) {
            double sum = 0;
            
            for (unsigned long &i : t)
                sum += i;

            return sum / t.size();
        }
        
        double average(std::vector<unsigned long long> t) {
            double sum = 0;
            
            for (unsigned long long &i : t)
                sum += i;

            return sum / t.size();
        }
    }

    namespace armanip {
        //Removes the last item of an array
        unsigned int popBack(unsigned int tab[], size_t& n){
            return tab[--n];
        } 

        long unsigned int popBack(long unsigned int tab[], size_t& n) {
            return tab[--n];
        } 

        long long unsigned int popBack(long long unsigned int tab[], size_t& n){
            return tab[--n];
        } 

        int popBack(int tab[], size_t& n) {
            return tab[--n];
        } 
            
        long int popBack(long int tab[], size_t& n) {
            return tab[--n];
        } 
        
        long long int popBack(long long int tab[], size_t& n){
            return tab[--n];
        } 

        double popBack(double tab[], size_t& n){
            return tab[--n];
        } 

        long double popBack(long double tab[], size_t& n){
            return tab[--n];
        } 

        float popBack(float tab[], size_t& n){
            return tab[--n];
        } 

        char popBack(char tab[], size_t& n){
            return tab[--n];
        } 

        std::string popBack(std::string tab[], size_t& n){
            return tab[--n];
        }

        //Removes the first item of an array
        unsigned int popFront(unsigned int tab[], size_t& n) {
            for(size_t i=1; i<n; i++)
                tab[i-1]=tab[i];
            return tab[--n]; 
        }

        long unsigned int popFront(long unsigned int tab[], size_t& n) {
            for(size_t i=1; i<n; i++)
                tab[i-1]=tab[i];
            return tab[--n]; 
        }

        long long unsigned int popFront(long long unsigned int tab[], size_t& n) {
            for(size_t i=1; i<n; i++)
                tab[i-1]=tab[i];
            return tab[--n]; 
        }

        int popFront(int tab[], size_t& n) {
            for(size_t i=1; i<n; i++)
                tab[i-1]=tab[i];
            return tab[--n]; 
        }

        long int popFront(long int tab[], size_t& n) {
            for(size_t i=1; i<n; i++)
                tab[i-1]=tab[i];
            return tab[--n]; 
        }

        long long int popFront(long long int tab[], size_t& n) {
            for(size_t i=1; i<n; i++)
                tab[i-1]=tab[i];
            return tab[--n]; 
        }

        double popFront(double tab[], size_t& n) {
            for(size_t i=1; i<n; i++)
                tab[i-1]=tab[i];
            return tab[--n]; 
        }

        long double popFront(long double tab[], size_t& n) {
            for(size_t i=1; i<n; i++)
                tab[i-1]=tab[i];
            return tab[--n]; 
        }

        float popFront(float tab[], size_t& n) {
            for(size_t i=1; i<n; i++)
                tab[i-1]=tab[i];
            return tab[--n]; 
        }

        char popFront(char tab[], size_t& n) {
            for(size_t i=1; i<n; i++)
                tab[i-1]=tab[i];
            return tab[--n]; 
        }

        std::string popFront(std::string tab[], size_t& n) {
            for(size_t i=1; i<n; i++)
                tab[i-1]=tab[i];
            return tab[--n]; 
        }
    }
}

