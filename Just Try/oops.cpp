// #include <bits/stdc++.h>
#include <iostream>
#include <cstring>

using namespace std;

class Hero
{
    private:        
        short health;
    public:
        char *name;
        char level;
        static int valueOnTime;

    Hero(){  // Default constructor
        cout << "Default constructor called..." << endl << endl;
        name = new char[100];
    }

    // Hero(int health){  // Parameterized constructor
    //     this->health = health;
    //     cout << "this is: " << this << endl;
    //     cout << "Parameterized constructor called" << endl;
    //     cout << "health is: " << health << endl;
    // }

    // Hero(int health, char level){
    //     this->health = health;
    //     this->level = level;
    //     cout << "this is: " << this << endl;
    //     cout << "Parameterized constructor called" << endl;
    //     cout << "health is: " << health << endl;
    //     cout << "Level is : " << level << endl;
    // }

    // copy constructor 

    Hero(Hero &i){
        char *ch = new char[strlen(i.name) + 1];
        strcpy(ch, i.name);
        this->name = ch;
        this->level = i.level;
        this->health = i.health;
        cout << "Copy constructor called..." << endl << endl;
    }

    void print(){
        // cout << "Rajesh status is shown below:" << endl << endl;
        cout << "[Name:" << name << ", ";
        cout << "Health: " << health << ", ";
        cout << "Level: " << level << "]" << endl << endl;
    }
    
    int getHealth(){
        return health;
    }

    void setHealth(int health){
        this->health = health;
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }

    static int temp(){
        return valueOnTime;
    }
};

 int Hero::valueOnTime = 5;

int main(){

    // Static Memory Allocation...
    Hero H1;
    char name[6] = "Akhil";
    H1.setName(name);
    H1.setHealth(100);
    H1.level = 'A';

    // Dynamic memory Allocation...
    Hero *H2 = new Hero;

    char class_name[6] = "Rohan";
    H2->setName(class_name);
    H2->setHealth(90);
    H2->level = 'B';

    // Call both objects...
    H1.print();
    H2->print(); 


    H2->getHealth();

    cout << "Value of static member: " << Hero::temp() << endl << endl;

    Hero::valueOnTime = 10;
    cout << "Updated value of static member: " << Hero::temp() << endl << endl;
    
    return 0;
}


























    // Hero Rohan;
    // Rohan.setHealth(80);
    // Rohan.level = 'A';
    // char name[7] = "Rohan";
    // Rohan.setName(name);
    // cout << endl << "Rohan status is shown below:" << endl << endl;
    // Rohan.print();
   

    // Hero Sohan(Rohan);  // Shallow Copy...
    // cout << "Sohan status is shown below:" << endl << endl;
    // Sohan.print();

    // Rohan.name[0] = 'S';
    // Rohan.print();
    // Sohan.print();

    // Hero Akhil;
    // Akhil.setHealth(100);
    // Akhil.level = 'A';
    // char names[10] = "Akhil";
    // Akhil.setName(names);
    // cout << endl;
    // cout << "Akhil status is shown below:" << endl << endl;
    // Akhil.print();
    // Akhil.name[0] = 'N';

    // Hero Nikhil = Akhil;
    // cout << "Nikhil status is shown below:" << endl << endl;
    // Nikhil.print();

    // Hero Raman(Sohan);
    // cout << "Raman status is shown below: " << endl << endl;
    // Raman.print();
    // Raman.print();
    // Sohan.name[0] = 'S';
    // Sohan.print();
    // Raman.print();

    
    
    
    // cout << "First Object" << endl;
    // Hero Ajay;  // Static memory Allocation
    // Ajay.level = 'A';
    // Ajay.setHealth(40);
    // Ajay.print();
    // cout << "The size of Hero is: " << sizeof(Hero) << endl;
    // cout << "Level of Ajay is: " << Ajay.level << endl;

    // cout << "Second Object" << endl;
    // Hero *Akhil = new Hero;  // Dynamic memory Allocation
    // Akhil->setHealth(80);
    // Akhil->level = ' ';
    // cout << "the level of Akhil's is: " << Akhil->level << endl;
    // Akhil->level = 'B';
    // cout << "the level of Akhil is: " << Akhil->level << endl;
    // cout << "This is the health of Akhil: " << Akhil->getHealth() << endl;

    // cout << "Third Object" << endl;
    // Hero *Nikhil  = new Hero; // Dynamic memory Allocation 
    // Nikhil->level = 'O';
    // cout << "The level of Nikhil is: " << Nikhil->level << endl;
    // Nikhil->setHealth(50);
    // cout << "The health of Nikhil is: " << Nikhil->getHealth() << endl; 

    // // constructor
    // cout << "Fourth Object" << endl;
    // // Hero Lakhan; //create static Allocation...
    // Hero Lakhan(100);
    // Lakhan.level = 'Z';
    // cout << "Address of lakhan is: " << &Lakhan << endl;
    // cout << "Health of Lakhan is: " << Lakhan.getHealth() << endl;
    // cout << "Level of Lakhan is: " << Lakhan.level << endl;
    // // cout << "Health is: " << Lakhan.getHealth() << endl;

    // // Default copy constructor
    // Hero Raj(*Nikhil);
    // cout << "Raj health is: " << Raj.getHealth() << endl;
    // cout << "Raj level is: " << Raj.level << endl;
    // return 0;

    // // User defined copy constructor...
   



