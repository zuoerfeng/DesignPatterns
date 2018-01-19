#ifndef OBSERVER__H
#define OBSERVER__H
#include <vector>
#include <iostream>
using namespace std;

//定义两个接口
class Observer
{
public:
    virtual void update(float temp, float humidity, float pressure) = 0;
    void display(); //当布告牌需要显示时调用
};

class Subject
{
public:
    virtual void registerObserver(Observer* o) = 0; //添加观察者
    virtual void removeObserver(Observer* o) = 0;   //删除观察者
    virtual void notifyObserver() = 0;              //通知所有观察者
};

//实际的对象，采用主题的接口
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

//一个观察者
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
