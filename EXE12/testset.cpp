#include <iostream>
#include <set>

int main()
{
	std::set<int> st;
	st.insert(2);
	st.insert(4);
	std::cout << st.size();
}