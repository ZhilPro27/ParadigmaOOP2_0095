#include <iostream>
using namespace std;

class baseClass {
    public:
        virtual void perkenalan() final {
            cout << "Hallo saya Function dari base class";
        }
};

class derivedClass : public baseClass {
    public:
        void perkenalan() {
            cout << "Hallo saya Function dari derived class";
        }
};

int main(){
    derivedClass a;
    a.perkenalan(); //akses langsung pada class
    baseClass* obyek; //akses dengan pointer
    derivedClass test;

    obyek = &test;
    obyek->perkenalan();
    

    return 0;
}