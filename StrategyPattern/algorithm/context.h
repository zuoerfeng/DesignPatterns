#include "Strategy.h"

class Context
{
public:
	Context();
	virtual ~Context();


	void algorithm();
	void setStrategy(Strategy* st);

private:
	Strategy *m_pStrategy;

};

