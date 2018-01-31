//���������ϳ��࣬���й���
class CaffeineBeverageWithHook
{
public:
    void prepareRecipe();//����ģ�巽������Ϊ������һ���㷨��ģ�塣������������У�����㷨�������������ϵģ�

    //�����ģ���У��㷨�ڵ�ÿһ�����趼��һ�����������ˣ�ĳЩ��������������ദ��ģ�ĳЩ���������ദ����Ҫ���ദ��ķ���������Ϊ����
    void boilWater();
    virtual void brew() = 0;
    void pourInCup();
    virtual void addCondiments() = 0;

    //��ӹ��Ӻ������ɹ˿;����Ƿ���Ҫ��ӵ���,���ӿڱ�¶���û�
    virtual bool customerWantsCondiments();
};

class TeaWithHook : public CaffeineBeverageWithHook
{
public:
    void brew();
    void addCondiments();
    bool customerWantsCondiments();
};

//����
class CoffeeWithHook : public CaffeineBeverageWithHook
{
public:
    void brew();
    void addCondiments();
    bool customerWantsCondiments();
};

