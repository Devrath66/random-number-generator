#include <iostream>
#include <random>
#include <chrono>
#include <string>
using namespace std;

// Function to generate a 6-digit random number
int generateRandomNumber() {
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    mt19937 gen(seed); // Mersenne Twister engine
    uniform_int_distribution<> dist(100000, 999999); // 6-digit range
    return dist(gen);
}

// Function to generate a unique identifier (e.g., user/session ID)
string generateIdentifier() {
    unsigned seed = chrono::steady_clock::now().time_since_epoch().count();
    mt19937 gen(seed);
    uniform_int_distribution<> dist(0, 15);
    const char* hexChars = "0123456789ABCDEF";

    string id = "ID-";
    for (int i = 0; i < 8; ++i) {
        id += hexChars[dist(gen)];
    }
    return id;
}

int main() {
    int otp = generateRandomNumber();
    string identifier = generateIdentifier();

    cout << "Generated OTP: " << otp << endl;
    cout << "Unique Identifier: " << identifier << endl;

    return 0;
}