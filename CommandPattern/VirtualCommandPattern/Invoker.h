#include "command.h"

class Invoker{
public:
    Invoker();
    virtual ~Invoker();

    void setcommand(Command* pCommad);
    void call();

private:
    Command* m_pCommand;
};
