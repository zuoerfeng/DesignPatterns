#include "Observer.h"

int main()
{
    WeatherData wd;
    CurrentConditionsDisplay* ccd = new CurrentConditionsDisplay(&wd);
    wd.setMeasurements(33.2, 22.1, 53.2);
    wd.setMeasurements(1.1, 2.2, 3.3);
    wd.setMeasurements(3.2, 1.3, 5.5);
    delete ccd;
}
