#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "welcome to the amusement park, free for children, charge for adults" << endl;
    cin >> age;
    if (age < 18) {
        cout << "you are a child and play for free ";
        return 0;
    }
    else {
        cout << "you are adults, need charge.";
        return 0;
    }
}