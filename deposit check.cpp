//

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int NumberOfChecks;
	float Balance, BalanceFee, CheckFee;
											// infinate loop
	while (true) { 

		BalanceFee = 0;
		CheckFee = 0;
		Balance = 0;
		NumberOfChecks = 0;


		cout << "Please Enter Balance: " << endl;
		cin >> Balance;

		if (Balance < 0)
		{
			cout << "The Account Is Overdrawn !!!" << endl;
			return 1;
		}


		cout << "enter Number of checks: " << endl;
		cin >> NumberOfChecks;
		if (NumberOfChecks < 0)
		{
			cout << "You can not have a negative number of checks" << endl;
			return 1;
		}

		if (Balance < 400)
		{
			BalanceFee += 15;
		}

		if (NumberOfChecks < 20)
		{
			CheckFee = (float) (NumberOfChecks * .10);
		}
		else
		{
			if (NumberOfChecks < 40)
			{
				CheckFee = (float) (NumberOfChecks * .08);
			}
			else
			{
				if (NumberOfChecks < 60)
				{
					CheckFee = (float) (NumberOfChecks * .06);
				}
				else
				{
					if (NumberOfChecks >= 60)
					{
						CheckFee = (float) (NumberOfChecks * .04);
					}
				}
			}
		}

		Balance = Balance - BalanceFee - CheckFee;
		printf("Bank Fees: \t$%10.2f\n", BalanceFee + CheckFee);
		printf("Balance: \t$%10.2f\n", Balance);

		cout << endl;
	}

	return 0;
}
		