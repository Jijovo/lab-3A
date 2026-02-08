using namespace std;
#include <iostream>



struct restaurant {
    string name;
    string city;
    string country;
    int zipCode;
    double rating;

};

restaurant createRestaurant();

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

int main() {
    restaurant r = createRestaurant();
    cout << r.name << endl << r.city << endl << r.country << endl << r.zipCode << endl << r.rating << endl;
    return 0;
}