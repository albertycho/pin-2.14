#include <iostream>
#include <cstdint>

using namespace std;

int main() {
    uint64_t arr[16];
    for (uint64_t i = 0; i < 16; i++) {
        arr[i] = 0xdeadbeef;
    }
std::cout << "Application: " << std::hex <<  &(arr[0]) << std::endl;
    int i;
    for (i = 0; i < 16; i++) {
        std::cout << std::hex << arr[i] << std::endl;
    }
    return 0;
}
