#include <iostream>

using namespace std;


int main(){
	cout << "Francesco Maresca, Program written in C++, 2022." << endl;
float a; // side of the cube
float choose;

cout << "1 to calculate cube volume. 2 to calculate square pyramid volume." << endl;
cin >> choose;






if (choose == 1){
	
	cout << "Write the side of the cube: " << endl;
cin >> a;


float vol;
vol = a * a * a;


cout << "The volume of the cube is " << vol << "." << endl;	
		

	
} else if (choose == 2){
	
	float height;
	float side;
	float perimeter;
	float apothem;
	float area;
    float pyvol;
    

	cout << "Give the side of the triangle: " << endl;
	cin >> side;
	cout << "Give the height of the cube: " << endl;	
	cin >> height;
	
	area = side * side;
	pyvol = (area * height)/3;
	
	cout << "The volume of the pyramid is " << pyvol << endl;
	

}




}
