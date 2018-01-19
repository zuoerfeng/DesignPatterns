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
    //��ÿһ���۲��߶����£�ֱ�ӵ��ø��µĽӿڼ��ɡ�
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
    display();  //���¶Ⱥ�ʪ�ȱ����������ٵ���display����
}

void CurrentConditionsDisplay::display()
{
    cout<<"Current conditions: "<<temp<<" F degrees and " << humidity << "% humidity"<<endl;
}
