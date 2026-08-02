#include <bits/stdc++.h>
#include <mutex>
using namespace std;

// Threading is expensive avoid locking

class Singletone
{
private:
    static Singletone *instance;
    static mutex mtx;

    Singletone()
    {
        cout << "Singleton class is called!" << endl;
    }

public: // Static belong to class
    static Singletone *getInstance()
    {
        // Lock safety for thread(multiple)
        if (instance == nullptr)
        {
            lock_guard<mutex> lock(mtx);
            if (instance == nullptr)
            {
                instance = new Singletone();
            }
        }
        return instance;
    }
};

Singletone *Singletone::instance = nullptr;
mutex Singletone::mtx;

int main()
{
    Singletone *s1 = Singletone::getInstance();
    Singletone *s2 = Singletone::getInstance();
    cout << (s1 == s2) << endl;
}