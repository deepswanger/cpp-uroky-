#include <iostream>

int main() {
    char arr[5][5] = {
        {'1', '1', '1', '1', '1'},
        {'1', '0', '0', '0', '1'},
        {'1', '1', '0', '1', '1'},
        {'1', '1', '0', '1', '1'},
        {'1', '1', '0', '1', '1'}
    };

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
