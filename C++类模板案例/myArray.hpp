//����������ʵ��һ��ͨ�õ������࣬Ҫ�����£�
//���Զ��������������Լ��Զ����������͵����ݽ��д洢
//�������е����ݴ洢������
//���캯���п��Դ������������
//�ṩ��Ӧ�Ŀ������캯���Լ�operator= ��ֹǳ��������
//�ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
//����ͨ���±�ķ�ʽ���������е�Ԫ��
//���Ի�ȡ�����е�ǰԪ�ظ��������������
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
	//��������
	//����ʹ���๹�����ʱ�ڵ��ÿ������캯�����Խ������
	MyArray(const MyArray& arr)
	{
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[this->m_Capacity];
		//���и�ֵ
		for (int i = 0; i < m_Size; i++)
		{
			//���TΪ���󣬶��һ�����ָ�룬������Ҫ���� = ����������Ϊ����ȺŹ�����Ǹ�ֵ
			//��ͨ���Ϳ���ֱ��= ����ָ��������Ҫ���
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	MyArray& operator=(const MyArray& arr)
	{		
		//�����ǰĿ�겻Ϊ��ʱ��������Ҫ���ͷſռ�, �������ֵ
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		this->m_Capacity = arr.m_Capacity; 
		this->m_Size = arr.m_Size;
		//�����µĿռ�
		this->pAddress = new T[this->m_Capacity];
		for (int i = 0; i < m_Size; i++)
		{
			this->pAddress[i] = arr->pAddress[i];
		}
		return  *this;
	}
	//����[]��������arr[]
	//���ص����� ��Ϊ����������arr�����޷�ֱ��ʹ��[]
	T& operator[](const int index)
	{
		return this->pAddress[index];		//����������Խ��
	}
	//β�巨
	void Push_Back(const T& val)
	{
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}
	//βɾ��
	void Pop_back()
	{
		if (this->m_Size == 0)
		{
			return;
		}

		this->m_Size--;
	}
	//��ȡ��������
	int getCapacity()
	{
		return this->m_Capacity;
	}
	//��ȡ�����С
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