#include "Observer.h"

WeatherData::WeatherData()
{

}

void WeatherData::registerObserver(Observer *o)
{
    m_observers.push_back(o);
}

void WeatherData::removeObserver(Observer *o)
{

}

void WeatherData::notifyObserver()
{
    //把每一个观察者都更新，直接调用更新的接口即可。
    for(vector<Observer*>::iterator it=m_observers.begin(); it!=m_observers.end(); ++it)
    {
        Observer* ob = *it;
        ob->update(temp, humidity, pressure);
    }
}

void WeatherData::setMeasurements(float temp, float humidity, float pressure)
{
    this->temp = temp;
    this->humidity = humidity;
    this->pressure = pressure;

    notifyObserver();
}


CurrentConditionsDisplay::CurrentConditionsDisplay(Subject* weatherData)
{
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}

void CurrentConditionsDisplay::update(float temp, float humidity, float pressure)
{
    this->temp = temp;
    this->humidity = humidity;
    display();  //把温度和湿度保存起来，再调用display（）
}

void CurrentConditionsDisplay::display()
{
    cout<<"Current conditions: "<<temp<<" F degrees and " << humidity << "% humidity"<<endl;
}
