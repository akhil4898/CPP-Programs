#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

class Learning{
    int health;
    char level;
    int* p;

    public: 
    char *name;

    // Default constructor
    Learning(){
        p = new int;
        *p = 0;
        cout << "Constructor called..." << endl;
    }

    void display(){
        cout << "P is: " << *p << endl;
    }

    // Parameterized constructor
    Learning(int h){
        this->health = h;
        cout << "This is Parameterized constructor..." << endl;
        cout << "Health is: " << this->health << endl;
    }

    // Copy Constructor...


    void setHealth(int h){
        this->health = h;
    }

    void setName(char n[]){
        this->name = n;
    }

    void setLevel(char L){
        this->level = L;
    }   

    int getHealth(){
        return this->health;
    }

    char getLevel(){
        return this->level;
    }

    string getName(){
        return this->name;
    }
};

int main(){

    // Static Memory Allocation...
    cout << "First Object..." << "\n----------------" << endl;
    Learning Akhil;
    char name[10] = "Nikhil";
    Akhil.setName(name);
    cout << "Name is: " << Akhil.getName() << endl;
    Akhil.setLevel('A');
    cout << "Level is: " << Akhil.getLevel() << endl;
    Akhil.display();
    cout << endl << "Second Object..." << "\n----------------" << endl;

    // Dynamic Memory Allocation...
    Learning *Rohan = new Learning;
    char clas_name[10] = "Rohan";
    Rohan->setName(clas_name);
    cout << "Name is: " << Rohan->getName() << endl;
    Rohan->name[0] = 'S';
    cout << "Update name is: " << Rohan->getName() << endl;
    Rohan->setHealth(60);
    cout << "Health is: " << Rohan->getHealth() << endl;
    Rohan->setLevel('B');
    cout << "Level is: " << Rohan->getLevel() << endl;

    return 0;
}