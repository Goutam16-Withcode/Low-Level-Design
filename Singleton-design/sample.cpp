#include<bits/stdc++.h>
using namespace std;

class Singletone{
private:
      static Singletone* instance;
      Singletone(){
        cout<<"This is the singleton class"<<endl;
      }
public: // Static belong to class
      static Singletone* getInstance(){
        if(instance==nullptr){
            instance = new Singletone();
        }
        return instance;
      }
};

Singletone * Singletone::instance = nullptr; // gloabal point of access instance singleton

int main(){
    Singletone* s1 = Singletone::getInstance();
    Singletone* s2 = Singletone::getInstance();
    cout<<(s1==s2)<<endl;
}