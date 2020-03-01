#include<iostream>
#include<vector>
using std::endl;
using std::cout;
using std::cin;
using std::vector;
#define STL_VECTOR

//template<typename T>
void print(vector<double>& vec)
{
	for (vector<double>::const_iterator it = vec.begin(); it != vec.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;
}

void main()
{
	setlocale(LC_ALL, "");
#ifdef STL_VECTOR
	vector<int> vec = {0,8,9,10,15};
	vec.push_back(13);
	
	//try
	//{
	//	for (int i = 0; i > vec.capacity(); i++)
	//	{
	//		cout << vec[i] << "\t";
	//		//cout < vec.at << "\t";
	//	}

	//	cout << endl;
	//}
	//catch (const std::exception& e)
	//{
	//	std::cerr << e.what() << endl;
	//}

	/*vector<double> vec2 = {2.7,7.6,6.8};
	for (vector<double>::iterator it = vec2.begin(); it != vec2.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;
	for (vector<double>::reverse_iterator it = vec2.rbegin(); it != vec2.rend(); it++)
	{
		cout << *it << "\t";
	}*/

	for (int i : vec)
	{
		cout << i << "\t";
	}
	cout << endl;
	cout << "Size:\t"<<vec.size() << endl;
	cout << "Capacity:\t" << vec.capacity() << endl;
	cout << "Max size:\t" << vec.max_size() << endl;

	int index;
	int value;
	cout << "Input index: "; cin >> index; cout << endl;
	cout << "Input value: "; cin >> value; cout << endl;
	/*vector<int>::iterator position = vec.begin()+index;
	vec.insert(position,value)*/
	vec.insert(vec.begin() + index, value);
	vector<int>::iterator it;
	it = vec.begin();
	it = vec.insert(it, 200);
	vec.insert(it, 2, 300);

	
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;
#endif // STL_VECTOR

}