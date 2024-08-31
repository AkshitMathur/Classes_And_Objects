//23070123014 Akshit Mathur
//Aim:to calculate the volume of cuboid using classes and objects.
#include <iostream>
using namespace std;

class Cuboid {
    float length;
    float breadth;
    float height;
    float volume;

public:
    void inputDimensions() {
        cout << "Enter the length of the cuboid: "<<endl;;
        cin >> length;
        cout << "Enter the breadth of the cuboid: "<<endl;
        cin >> breadth;
        cout << "Enter the height of the cuboid: "<<endl;
        cin >> height;
    }
    
	void calculateVolume() {
        volume = length * breadth * height;
    }

    void displayVolume() {
        cout << "The volume of the cuboid is: " << volume << endl;
    }
};

int main() {
    Cuboid cuboid;
	cuboid.inputDimensions();
    
	cuboid.calculateVolume();
    
	cuboid.displayVolume();
    
	return 0;
}
//output
/*
Enter the length of the cuboid:
24
Enter the breadth of the cuboid:
25
Enter the height of the cuboid:
26
The volume of the cuboid is: 15600
*/
