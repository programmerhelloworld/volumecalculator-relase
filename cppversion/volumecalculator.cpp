#include <iostream>

using namespace std;


int main(){
	cout << "Francesco Maresca, Program written in C++, 2022." << endl;
float a; // side of the cube
float choose;

cout << "1 to calculate cube volume. 2 to calculate square pyramid volume. 3 to calculate rectangular parallelepiped. " << endl;
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
	
	cout << "The volume of the pyramid is " << pyvol << "." << endl;
	

} else if (choose == 3){
float side1;
float side2;
float height;
float parvol;

cout << "Give side one" << endl;
cin >> side1;

cout << "Give side two" << endl;
cin >> side2;

cout << "Give the height" << endl;
cin >> height;

parvol = side1 * side2 * height;

cout << "The volume of the rectangular parallelepiped is " << parvol << "." << endl;
}




}
