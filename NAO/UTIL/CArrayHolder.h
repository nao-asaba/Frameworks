#pragma once

template<class T>
class CArrayHolder
{
private:
	CArrayHolder();
public:
	CArrayHolder( T* pArray, int arrayNum )
		: m_pArray(pArray)
		  , m_ArrayNum(arrayNum)
	{ }
	/// コピーコンストラクタ
	CArrayHolder( const CArrayHolder &cpy )
		: m_pArray( cpy.m_pArray )
		, m_ArrayNum( cpy.m_ArrayNum )
	{ }
	/// デストラクタ
	~CArrayHolder(){}
public:
	/// 代入演算子
	CArrayHolder& operator=(const array &cpy )
	{
		this.m_pArray = cpy.m_pArray;
		this.m_ArrayNum = cpy.m_ArrayNum;

		return (*this);
	}

	T& operator[](int i)
	{
		if( !( ( 0<=i ) && ( i<m_ArrayNum ) ) )
		{
			// プログラムエラー
		}
		return m_pArray[i];
	}
private:
	T* pArray;
	int arrayNum;
};
