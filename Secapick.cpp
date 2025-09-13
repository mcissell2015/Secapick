#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>

void count_seconds() {
    /** Counts seconds since the epoch. */
    int seconds = 0;
    while (true) {
        std::cout << seconds << " Seconds have passed" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::system("clear");
        seconds += 1;
    }
}

int main() {
    count_seconds();
    return 0;
}