#pragma once
class State
{
public:
	State() {};
	~State() {};
	virtual void opening() = 0;
	virtual void closing() = 0;
	virtual void locking() = 0;
	virtual void unlocking() = 0;
};

