#ifndef OBSERVER__H
#define OBSERVER__H
#include <vector>
#include <iostream>
using namespace std;

//���������ӿ�
class Observer
{
public:
    virtual void update(float temp, float humidity, float pressure) = 0;
    void display(); //����������Ҫ��ʾʱ����
};

class Subject
{
public:
    virtual void registerObserver(Observer* o) = 0; //��ӹ۲���
    virtual void removeObserver(Observer* o) = 0;   //ɾ���۲���
    virtual void notifyObserver() = 0;              //֪ͨ���й۲���
};

//ʵ�ʵĶ��󣬲�������Ľӿ�
class WeatherData : public Subject
{
private:
    vector<Observer*> m_observers;
    float temp;
    float humidity;
    float pressure;

public:
    WeatherData();
//  ~WeatherData();

    void registerObserver(Observer* o);
    void removeObserver(Observer* o);
    void notifyObserver();

    void measurementsChanged();
    void setMeasurements(float temp, float humidity, float pressure);
};

//һ���۲���
class CurrentConditionsDisplay : public Observer
{
private:
    float temp;
    float humidity;
    Subject* weatherData;
public:
    CurrentConditionsDisplay(Subject* weatherData);
    void update(float temp, float humidity, float pressure);
    void display();
};

#endif
