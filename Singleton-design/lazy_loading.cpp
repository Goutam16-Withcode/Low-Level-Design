#include<bits/stdc++.h>
using namespace std;

class LogginSystem{
private:
     static LogginSystem* instance;
     LogginSystem(){
        cout<<"Welcome to the logging system"<<endl;
     }
public:
       static LogginSystem* getInstance(){
          if(instance==nullptr){
              instance = new LogginSystem();
          }
          return instance;
       }
};

LogginSystem*LogginSystem::instance = nullptr; 

int main(){
    LogginSystem* l1 = LogginSystem::getInstance();
    LogginSystem* l2 = LogginSystem::getInstance();
    cout<<(l1==l2)<<endl;
}