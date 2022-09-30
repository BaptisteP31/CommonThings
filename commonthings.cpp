#include "commonthings.hpp"

namespace commonthings {
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