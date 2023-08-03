#include <format>
#include <iostream>

using namespace std;

int main() {
    cout << format("Hello, world!\n");
    cout << format("{} - {} - {}\n", "2023", "8", "2");
}