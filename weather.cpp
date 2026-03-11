#include <iostream>
#include <string>
using namespace std;

int main () {

//Variables of different Data Types
double temperature;
string username;
char unit;

//Title
cout << "===WEATHER ADVISORY TOOL===" << endl;

//Inputting Name and Temperature
cout << "Enter Username: ";
getline(cin, username); //For names with space
cout << "Enter current temperature: ";
cin >> temperature;


//Temperature Unit
cout << "Enter unit (C/F): ";
cin >> unit;

//If Temperature in Fahrenheit(F), convert to Celsius first
if (unit == 'F' || unit == 'f') {
    temperature = (temperature - 32) * 5.0/9.0;
}

//Conditional statement for Temperature in Celsius(C)
if (temperature > 30)
{
    cout << "Hello " << username << ", Stay hydrated and avoid prolonged sun exposure" << endl;
}
else if (temperature >= 20 && temperature < 30)
{
    cout << "Hello " << username << ", Pleasant weather, great for outdoor activities" << endl;
}
else if (temperature >= 10 && temperature < 20)
{
    cout << "Hello " << username << ", Light jacket is recommended" << endl;
}
else if (temperature < 10)
{
    cout << "Hello " << username << ", Extremely cold, keep warm, limit outdoor activities" << endl;
}

return 0;
}
