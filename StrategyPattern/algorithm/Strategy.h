#ifndef _STRATEGY_
#define _STRATEGY_

class Strategy{
public:
    Strategy() = default;
    virtual void algorithm() = 0;    //注意为抽象类，即为纯虚函数，继承它必须重写构造虚函数，纯虚函数完成接口

};

#endif // _STRATEGY_

