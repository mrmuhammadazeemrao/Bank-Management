
# include "Hashtable.h"
# include "BST_Tree.h"
# include "admin.h"
# include "staff.h"
# include "customer.h"

void boot()
{
	//Janu ma na b T-Shirt leni ha
	Hashtable H;
	BST_Tree T;
	H.starthash();
	T.load_Server();
}
int main()
{
	void boot();

	int condition=0;
	while (condition != 4)
	{
		cout << "YOU want to login as:\t\t\t\t\t\t" << endl << endl;
		cout << "1-ADMIN" << endl;
		cout << "2-STAFF" << endl;
		cout << "3-CUSTOMER" << endl;
		cin >> condition;
		if (condition == 1)
		{
			admin();
		}
		//should use else if condition after first if, to avoid code complexity and to make it more optimize
		if (condition == 2)
		{

		}
		if (condition == 3)
		{
			customer();
		}
		if (condition == 4)
		{
			condition = 4;
		}
	}

	
	system("pause");
	return 0;
}
