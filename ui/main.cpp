#include<iostream>
#include<chrono>
#include<ctime>
#include <core/include/node.hpp>
//----------------------------------------------
void diagnosticsinfo() {
    // Get current system time
    auto now = std::chrono::system_clock::now();
    std::time_t currentTime = std::chrono::system_clock::to_time_t(now);

    std::cout << "========================================\n";
    std::cout << "          PROGRAM DIAGNOSTICS           \n";
    std::cout << "========================================\n";
    std::cout << "Run Time     : " << std::ctime(&currentTime);
    std::cout << "Compiled On  : " << __DATE__ << " at " << __TIME__ << "\n";
    std::cout << "C++ Standard : " << __cplusplus << "\n";
    std::cout << "Compiler     : GCC " << __GNUC__ << "." << __GNUC_MINOR__ << "." << __GNUC_PATCHLEVEL__ << "\n";
    std::cout << "Architecture : " << (sizeof(void*) * 8) << "-bit\n";

    #ifdef NDEBUG
        std::cout << "Build Mode   : Release\n";
    #else
        std::cout << "Build Mode   : Debug\n";
    #endif

    std::cout << "========================================\n\n";
}

int main() {
    diagnosticsinfo();
    return 0;
}