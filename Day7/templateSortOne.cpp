#include <iostream>
using namespace std;

template<typename T>
class ISort
	{
	public:
		virtual void SortArr(T* coll, int size) = 0;
	};

	template<typename T, int size>
	class ArrayContainer
	{
		T* ar;
		ISort<T>* srt;
	public:
		ArrayContainer(T* ar) :ar(ar), srt(NULL)
		{
		}
		void SetSort(ISort<T>* srt)
		{
			this->srt = srt;
		}
		void Sort()
		{
			if (srt != NULL) {
				this->srt->SortArr(ar, size);
			}
		}

		void Display()
		{
			cout << "________________________________________\n";
			for (size_t i = 0; i < size; i++)
			{
				cout << ar[i] << ' ';
			}
			cout << "\n________________________________________\n";
		}
	};
	//------------------------------------------------------------
	template<typename T>
	class LinearSort :public ISort<T>
	{
	public:
		void SortArr(T* coll, int size)
		{
			for (size_t i = 0; i < size - 1; i++)
			{
				for (size_t j = i + 1; j < size; j++)
				{
					if (coll[i] >= coll[j]) {
						swap(coll[i], coll[j]);
					}
				}
			}
		}
	};
template<typename T>
	class BubbleSort :public ISort<T>
	{
	public:
		void SortArr(T* coll, int size)
		{
			for (size_t i = 0; i < size - 1; i++)
			{
				for (size_t j = size - 1; j >= i + 1; j--)
				{
					if (coll[j] <= coll[j - 1]) {
						swap(coll[j], coll[j - 1]);
					}
				}
			}
		}
	};
	//-------------
	int main()
	{
		int arr[5] = { 5,2,1,3,4 };
		ArrayContainer<int, 5> cnt(arr);
		BubbleSort<int> bubleSrt;
		cnt.SetSort(&bubleSrt);
		cnt.Display();
		cnt.Sort();
		cnt.Display();
		return 0;
	}

