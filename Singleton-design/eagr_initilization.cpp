#include <bits/stdc++.h>
using namespace std;

class LoggingSystem {
private:
    LoggingSystem() {
        cout << "Welcome to Logging System\n";
    }

    static LoggingSystem instance;   // Object created eagerly

public:
    static LoggingSystem& getInstance() {
        return instance;
    }
};

// Object is created before main()
LoggingSystem LoggingSystem::instance;

int main() {
    LoggingSystem& l1 = LoggingSystem::getInstance();
    LoggingSystem& l2 = LoggingSystem::getInstance();

    cout << (&l1 == &l2) << endl;
}