#include <iostream>
using namespace std;

class CPU
{
public:
    int model; 
    double frequency; 

    CPU(int m, double f) : model(m), frequency(f) {}
};

class RAM
{
public:
    int capacity; 
    int type;     

    RAM(int c, int t) : capacity(c), type(t) {}
};

class Storage
{
public:
    int capacity; 
    int type;     

    Storage(int c, int t) : capacity(c), type(t) {}
};

class Display
{
public:
    double size;  
    int resolution; 

    Display(double s, int r) : size(s), resolution(r) {}
};

class Battery
{
public:
    int capacity; 
    double life;  

    Battery(int c, double l) : capacity(c), life(l) {}
};

class Keyboard
{
public:
    bool backlit; 
    int layout;    

    Keyboard(bool b, int l) : backlit(b), layout(l) {}
};

class GPU
{
public:
    int model;    
    int memory;   

    GPU(int m, int mem) : model(m), memory(mem) {}
};

class Laptop
{
public:
    CPU cpu;
    RAM ram;
    Storage storage;
    Display display;
    Battery battery;
    Keyboard keyboard;
    GPU gpu;

    Laptop(CPU c, RAM r, Storage s, Display d, Battery b, Keyboard k, GPU g)
        : cpu(c), ram(r), storage(s), display(d), battery(b), keyboard(k), gpu(g) {}

    void displayInfo()
    {
        cout << "CPU Model ID: " << cpu.model << ", Frequency: " << cpu.frequency << " GHz" << endl;
        cout << "RAM: " << ram.capacity << " GB, Type ID: " << ram.type << endl;
        cout << "Storage: " << storage.capacity << " GB, Type ID: " << storage.type << endl;
        cout << "Display: " << display.size << " inches, Resolution ID: " << display.resolution << endl;
        cout << "Battery: " << battery.capacity << " mAh, Life: " << battery.life << " hours" << endl;
        cout << "Keyboard: " << (keyboard.backlit ? "Backlit" : "Non-backlit") << ", Layout ID: " << keyboard.layout << endl;
        cout << "GPU Model ID: " << gpu.model << ", Memory: " << gpu.memory << " MB" << endl;
    }
};

int main()
{
    CPU cpu(1, 2.8);  
    RAM ram(16, 2);   
    Storage storage(512, 2); 
    Display display(15.6, 1); 
    Battery battery(4500, 8); 
    Keyboard keyboard(true, 1); 
    GPU gpu(1, 4096); 

    Laptop laptop(cpu, ram, storage, display, battery, keyboard, gpu);

    laptop.displayInfo();

    return 0;
}