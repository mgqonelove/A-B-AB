#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the distance between two points
float DistanceBetweenPoints(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Function to calculate the distance between two points on the X-axis (OX)
float DistanceOnOX(float x1, float x2) {
    return abs(x2 - x1); // Using the abs function to get the absolute value
}

// Function to calculate the distance between two points on the Y-axis (OY)
float DistanceOnOY(float y1, float y2) {
    return abs(y2 - y1); // Using the abs function to get the absolute value
}

// Function to calculate the distance from a point to the origin
float DistanceToOrigin(float x, float y) {
    return sqrt(pow(x, 2) + pow(y, 2));
}

int main() {
    // Input data
    float x1, y1, x2, y2;
    cout << "Enter the coordinates of the first point (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the second point (x2 y2): ";
    cin >> x2 >> y2;

    // Choose what to calculate
    int choice;
    cout << "Choose what you want to calculate:" << endl;
    cout << "1. Distance between the points" << endl;
    cout << "2. Distance between the points on the X-axis (OX)" << endl;
    cout << "3. Distance between the points on the Y-axis (OY)" << endl;
    cout << "4. Distance from the points to the origin" << endl;
    cin >> choice;

    // Perform calculation based on user choice and output the result
    switch(choice) {
        case 1:
            cout << "Distance between the points: " << DistanceBetweenPoints(x1, y1, x2, y2) << endl;
            break;
        case 2:
            cout << "Distance between the points on the X-axis (OX): " << DistanceOnOX(x1, x2) << endl;
            break;
        case 3:
            cout << "Distance between the points on the Y-axis (OY): " << DistanceOnOY(y1, y2) << endl;
            break;
        case 4:
            cout << "Distance from the first point to the origin: " << DistanceToOrigin(x1, y1) << endl;
            cout << "Distance from the second point to the origin: " << DistanceToOrigin(x2, y2) << endl;
            break;
        default:
            cout << "Invalid input" << endl;
    }

    return 0;
}
