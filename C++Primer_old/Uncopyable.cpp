class Uncopyable
{
protected:
	Uncopyable() {}
	~Uncopyable() {}
private:
	Uncopyable(const Uncopyable&);  //阻止copying
	Uncopyable& operator=(const Uncopyable&); 
};