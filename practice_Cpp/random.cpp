#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const short min_value = 1;
    const short max_value = 6;

    srand(time(nullptr));
    int dice_number = (rand() % (min_value - max_value + 1)) + min_value;

    cout << "The number you get on dice is " << dice_number << "." << endl;

    return 0;
}