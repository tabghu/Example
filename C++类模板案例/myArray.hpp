//案例描述：实现一个通用的数组类，要求如下：
//可以对内置数据类型以及自定义数据类型的数据进行存储
//将数组中的数据存储到堆区
//构造函数中可以传入数组的容量
//提供对应的拷贝构造函数以及operator= 防止浅拷贝问题
//提供尾插法和尾删法对数组中的数据进行增加和删除
//可以通过下标的方式访问数组中的元素
//可以获取数组中当前元素个数和数组的容量
#include <iostream>
#include <string>
using namespace std;
template<class T>
class MyArray
{
public:
	MyArray(int capacity)
	{
		this->m_Capacity = capacity;
		this->m_Size = 0;
		pAddress = new T[this->m_Capacity];
	}
	//拷贝函数
	//当在使用类构造对象时在调用拷贝构造函数可以进行深拷贝
	MyArray(const MyArray& arr)
	{
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[this->m_Capacity];
		//进行赋值
		for (int i = 0; i < m_Size; i++)
		{
			//如果T为对象，而且还包含指针，必须需要重载 = 操作符，因为这个等号构造而是赋值
			//普通类型可以直接= 但是指针类型需要深拷贝
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	MyArray& operator=(const MyArray& arr)
	{		
		//如果当前目标不为空时，我们需要先释放空间, 再添加新值
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		this->m_Capacity = arr.m_Capacity; 
		this->m_Size = arr.m_Size;
		//开辟新的空间
		this->pAddress = new T[this->m_Capacity];
		for (int i = 0; i < m_Size; i++)
		{
			this->pAddress[i] = arr->pAddress[i];
		}
		return  *this;
	}
	//重载[]操作符，arr[]
	//重载的意义 因为后面声明的arr对象无法直接使用[]
	T& operator[](const int index)
	{
		return this->pAddress[index];		//不考虑数组越界
	}
	//尾插法
	void Push_Back(const T& val)
	{
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}
	//尾删法
	void Pop_back()
	{
		if (this->m_Size == 0)
		{
			return;
		}

		this->m_Size--;
	}
	//获取数组容量
	int getCapacity()
	{
		return this->m_Capacity;
	}
	//获取数组大小
	int getSize()
	{
		return this->m_Size;
	}
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
	} 
private:
	T* pAddress;
	int m_Capacity;
	int m_Size;
};