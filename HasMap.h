//#pragma  once
//
//#include <vector>
//#include <iostream>
//using namespace std;
//
//
//class BitMap
//{
//public:
//	BitMap()
//	{}
//
//	BitMap(size_t size)
//	{
//		��Ϊ��int 4���ֽ� 32����λ 
//		_table.resize((size >> 5) + 1);
//	}
//
//	void Set(int data)
//	{
//		����ڼ����ֽڣ�data/32�����ڼ�λ(data%32)
//		size_t byteNo = data >> 5;
//		size_t bitNo = data % 32;
//		_table[byteNo] |= (1 << bitNo);
//	}
//
//	�ָ�Ϊԭ����
//	void ReSet(int data)
//	{
//		size_t byteNo = data >> 5;
//		size_t bitNo = data % 32;
//		����λ��Ϊ1 ��һλΪ0 ��1 ��ԭΪ1���ʱ��Ϊ0
//		_table[byteNo] &= ~(1<<bitNo);
//	}
//
//	��������Ƿ�������
//	bool Check(int data)
//	{
//		size_t byteNo = data >> 5;
//		size_t bitNo = data % 32;
//
//		�����һλ���� ��λ�� �����ʱ��Ϊ0 ������ִ���
//		if ( (1 << bitNo)&_table[byteNo] )
//			return true;
//		return false;
//	}
//
//private:
//	vector<int> _table;
//};
//
//void Test()
//{
//	BitMap bp(1);
//	bp.Set(0);
//	bp.Set(1);
//	bp.Set(2);
//	bp.Set(3);
//	bp.Set(4);
//	bp.Set(5);
//	bp.Set(6);
//
//	cout << bp.Check(3);
//	cout << bp.Check(7);
//}