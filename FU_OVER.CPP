#include <iostream>
#include <cmath>
class Cube {
private:
double sideLength;
public:
Cube(double s) : sideLength(s) {}
double calculateVolume() {
return pow(sideLength, 3);
}
};
class Cuboid {
private:
double length, width, height;
public:
Cuboid(double l, double w, double h) : length(l),
double calculateVolume() {
return length * width * height;
}
};
class Cylinder {
private:
double radius, height;
public:
Cylinder(double r, double h) : radius(r), height(
double calculateVolume() {
return 3.14159265359 * pow(radius, 2) * heigh
}
};
int main() {
double sideLength, length, width, height, radius;
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
3
4
Enter the side length of t
Volume of the cube: 27
Volume of the cuboid: 8
Volume of the cylinder: 11
[Execution complete with e
myCompiler
9/26/23, 10:43 PM Create a new C++ program - myCompiler - myCompiler
https://www.mycompiler.io/new/cpp 2/2
Supported languages
Deno JavaScript NodeJS Python Ruby Go
C C++ Java C# TypeScript PHP
Bash R Octave
(MATLAB)
Fortran Lua Erlang
SQL MySQL MongoDB Clojure D Perl
Kotlin Swift Rust Assembly
Programming guides | Terms of service | Privacy policy | Contact us | © 2019 - 2023
mycompiler.io.
// Input for the cube
std::cout << "Enter the side length of the cube:
std::cin >> sideLength;
Cube cube(sideLength);
// Input for the cuboid
std::cout << "Enter the length, width, and height
std::cin >> length >> width >> height;
Cuboid cuboid(length, width, height);
// Input for the cylinder
std::cout << "Enter the radius and height of the
std::cin >> radius >> height;
Cylinder cylinder(radius, height);
// Calculate and display volumes
double cubeVolume = cube.calculateVolume();
double cuboidVolume = cuboid.calculateVolume();
double cylinderVolume = cylinder.calculateVolume(
std::cout << "\nVolume of the cube: " << cubeVolu
std::cout << "Volume of the cuboid: " << cuboidVo
std::cout << "Volume of the cylinder: " << cylind
return 0;
