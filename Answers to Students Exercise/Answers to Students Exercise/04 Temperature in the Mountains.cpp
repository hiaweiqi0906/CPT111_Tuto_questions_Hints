// Chapter 3, Programming Challenge 14: Temperature levels
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	// Constants
	const double LAPSE_RATE_CELSIUS = 5;
	const double LAPSE_RATE_FEET = 2.7;
	const double M_TO_FEET = 3.28;
    const double KM_1_FEET = 1000 * M_TO_FEET;
    const double KM_2_FEET = 2 * KM_1_FEET;
    const double KM_3_FEET = 3 * KM_1_FEET;

    // variables
    double seaLevelC, seaLevelF;
    double km1C, km1F;
    double km2C, km2F;
    double km3C, km3F;
    double everestC, everestF;
    double zeroDegreesM, zeroDegreesF;

    // ask for input
    cout << "Enter the temperature in degrees celsius at sea level: ";
    cin >> seaLevelC;

    // calculate and display fahrenheit
    seaLevelF = (seaLevelC*9/5)+32;
    cout << "In Fahrenheit this is equal to " << seaLevelF << " deegrees."<< endl;

    // calculate temperatures at different heights
    km1C = seaLevelC - LAPSE_RATE_CELSIUS;
    km1F = seaLevelF - LAPSE_RATE_FEET * M_TO_FEET;

    km2C = seaLevelC - 2 * LAPSE_RATE_CELSIUS;
    km2F = seaLevelF - 2 * LAPSE_RATE_FEET * M_TO_FEET;

    km3C = seaLevelC - 3 * LAPSE_RATE_CELSIUS;
    km3F = seaLevelF - 3 * LAPSE_RATE_FEET * M_TO_FEET;

    everestC = seaLevelC - 8.848 * LAPSE_RATE_CELSIUS;
    everestF = everestC * 9 / 5 + 32;

    cout << "At 1000m (" << KM_1_FEET << " feet) the temperature is " << km1C << " celsius and " << km1F << " fahrenheit.\n";
    cout << "At 2000m (" << KM_2_FEET << " feet) the temperature is " << km2C << " celsius and " << km2F << " fahrenheit.\n";
    cout << "At 3000m (" << KM_3_FEET << " feet) the temperature is " << km3C << " celsius and " << km3F << " fahrenheit.\n";
    cout << "At the Mount Everest the temperature is " << everestC << " celsius and " << everestF << " fahrenheit.\n";

    zeroDegreesM = 1000*(seaLevelC / LAPSE_RATE_CELSIUS);
    zeroDegreesF = 1000*(seaLevelF / LAPSE_RATE_FEET);

    cout << "At " << zeroDegreesM << " meters it is 0 degrees Celsius\n";
    cout << "At " << zeroDegreesF << " feet it is 0 degrees Fahrenheit\n";

	return 0;
}
