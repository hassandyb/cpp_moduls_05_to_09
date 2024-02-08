

//Nested classes, also known as inner classes, 
//are classes defined within another class. 

#include <iostream>

using namespace std;



class outer 
{
	public :
		int outervalue= 15;
	class inner 
	{
		public :
			int innervalue = 20;
	};
};


int main ()
{
	outer O_obj;
	outer::inner I_obj;


	cout << "outervalue : " << O_obj.outervalue << endl;
	cout << "innervalue : " << I_obj.innervalue << endl;
}





