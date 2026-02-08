// Ezzat Mohamadein ComSC-210 Lab4A
using namespace std;
#include <iostream>


// Define restaurant struct
struct restaurant {
    string name;
    string city;
    string country;
    int zipCode;
    double rating;

};
// Define function prototypes
restaurant createRestaurant();
void outputRestaurant(restaurant r);

// Creates restaurant struct and prompts user for input
restaurant createRestaurant() {
    restaurant r;
    cout << "Enter restaurant name: ";
    cin >> r.name;
    cout << "Enter restaurant city: ";
    cin >> r.city;
    cout << "Enter restaurant country: ";
    cin >> r.country;
    cout << "Enter restaurant zip code: ";
    cin >> r.zipCode;
    cout << "Enter restaurant rating: ";
    cin >> r.rating;
    return r;
}

//outputs restaurant data
void outputRestaurant(restaurant r) {
    cout << "Restaurant name: " << r.name << endl;
    cout << "City: " << r.city << endl;
    cout << "Country: " << r.country << endl;
    cout << "Zip Code: " << r.zipCode << endl;
    cout << "Rating: " << r.rating << endl;
}

int main() {
    restaurant r = createRestaurant();
    outputRestaurant(r);
    return 0;
}