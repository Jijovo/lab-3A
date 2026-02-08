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