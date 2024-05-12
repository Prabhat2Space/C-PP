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
			//Implement your Logic Here	
		}
	};
	//-----------------
	//-------------
	int main()
	{
		int arr[10] = { 50,18,20,32,10,16,30,45,40,80 };
		ArrayContainer<int, 10> cnt(arr);
		LinearSort<int> linSrt;
		cnt.SetSort(&linSrt);
		cnt.Display();
		cnt.Sort();

		cnt.Display();
		return 0;
	}

