
#include"vector0.cpp"
int main()
{
	vector<int>x;
	vector<int>y(x);
	vector<int>z;

	try
	{
		x = x;
	}
	catch (const std::exception&err)
	{
		std::cout << "<move exception> "<< err.what();
	}

	for (int i = 0; i < 5; ++i)
	{
		x.push_back(i);
	}
	x.print1();
	std::cout << "\n";
	std::cout << "x.size before x.front= " << x.size() << "\n";
	std::cout << "after from front \n";
	x.push_front(12);
	std::cout << "x. size= " << x.size() << "\ncall print function ";

	x.print1();
	std::cout << "\n";
	x.pop_front();
	std::cout << "print function after pop_front  "; x.print1();
	std::cout << "size= " << x.size() << " \n";

	system("pause");
}