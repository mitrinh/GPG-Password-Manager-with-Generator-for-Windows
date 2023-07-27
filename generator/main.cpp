#include <chrono>
#include <fstream>
#include <istream>
#include <iostream>
#include <random>
#include <string>
using namespace std;

string gen_random(const int len) {
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    mt19937 rng(seed);
    string result;
    static const char alphanum[] = "0123456789"
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "abcdefghijklmnopqrstuvwxyz"
    "!@#?.-_";

    uniform_int_distribution<> randomizer(0,(sizeof(alphanum)-2));
    for (int i = 0; i < len; ++i) {
        result += (alphanum[randomizer(rng)]);
    }
    return result;
}

void reset(){
    cin.clear();
    cin.ignore(256,'\n');
}

void generate_password() {
    int len = 0;
    cout << '\n' << "Enter password length: ";
    cin >> len;
    reset();
    string pw = gen_random(len);
    cout << pw << endl << '\n' << "Save as file? (y/n): ";
    char answer;
    cin >> answer;
    reset();
    if (answer == 'y') {
        ofstream file;
        string fileName;
        cout << '\n' << "Enter filename: ";
        cin >> fileName;
        file.open(fileName);
        file << pw;
        file.close();
        cout << "Successfully saved file!" << '\n';
    } else {
        generate_password();
    }
}

int main() {
    generate_password();
    return 0;
}