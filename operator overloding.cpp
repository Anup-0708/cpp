#include<iostream>
using namespace std;

	class calculate{
		
		private:
			int num;
		public:
			calculate():num(10){}
			
			
			void operator++()
			{
				++num;
			}
			
			void operator++(int)
			{
				num++;
			}
			void print()
			{
				cout<<"count is :"<<num;
			}
	};
	int main()
	{
		calculate obj;
		obj++;
		obj.print();
		++obj;
		obj.print();
		
		return 0;
	}

