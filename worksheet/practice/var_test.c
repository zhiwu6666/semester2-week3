#include <stdio.h>

/*
 * Example using different variable types
 */

int main( void ) {

    // define variables for the following data and print something useful about them in each case
    // choose appropriate variable names and data types considering also the range of values that are possible

    // 1. the hour hane of a clock
    unsigned char hour_hand = 10; // valid hour positions are 1-12
    printf("1) Hour hand position: %u\n", hour_hand);

    // 2. the total population of a country, eg. China has approximately 1.4billion people
    unsigned long long country_population = 1400000000ULL;
    printf("2) Country population: %llu people\n", country_population);

    // 3. the number of minutes between a given date/time and the current date/time, either earlier (negative) or in the future (positive)
    long long minute_offset = -325000LL;
    printf("3) Minutes offset from now: %lld\n", minute_offset);

    // 4. the mean temperature in Leeds over a one-year period
    float mean_temperature = 10.4f;
    printf("4) Mean temperature in Leeds: %.1f C\n", mean_temperature);

    // 5. a precise GPS location to within 10cm distance
    double gps_latitude = 53.8007550;
    double gps_longitude = -1.5490774;
    printf("5) GPS location: lat %.7f, lon %.7f\n", gps_latitude, gps_longitude);

    // 6. a calculation of pi to 12 decimal places 
    double pi_12dp = 3.141592653590;
    printf("6) Pi to 12 d.p.: %.12f\n", pi_12dp);

    return 0;
}