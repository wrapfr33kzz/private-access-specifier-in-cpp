#include<iostream>
using namespace std;
class AS
{
	private:
		int age;
		public:
		void dipl( int a1)
		{
			age=a1;
			cout<<"age is"<<age;
		}
};
main()
{
	AS ob;
	cout<<"enter age";
	int age;
	cin>>age;
    ob.dipl(age);
	
}
