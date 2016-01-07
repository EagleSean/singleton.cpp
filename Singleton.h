#pragma once

class Singleton
{
public:
	static Singleton * Instance()
	{
		++Count;
		if (Count == 1)
		{
			Data = new Singleton;
		}
		return Data;
	}

	static int GetCount()
	{
		return Count;
	}

	static int Close() 
	{
		--Count;
		if (Count == 0)
		{
			delete Data;
		}
		else if (Count < 0)
		{
			Count = 0;
		}
		else {};
		return Count;
	}
private:
	static int Count;
	static Singleton * Data;

	//防止异常
private:
	Singleton(){}
	~Singleton(){}
//	void operator=(Singleton & s){};
};

Singleton * Singleton::Data = 0;
int Singleton::Count = 0;
