int validValue(int day, int sum){
	if (day < 0 || day > 365 || sum < 10000)
		{
				return 0;
		}
		return 1;
}
int getsum(int day, int sum)
{
	double sum1 = sum;
	double sum2 = sum;
	if (day <= 30)  
	{
	sum1 = sum1 - (sum1 * 0.1);
	sum2 = sum2 - (sum2 * 0.1);
	}	
	if (day >= 31 && day < 121) 
	{
		sum1= sum1 + (sum1 * 0.02);
		sum2 = sum2 + (sum2 * 0.03);
	}
	if (day >= 121 && day < 241)
	{
		sum1 = sum1 + (sum1 * 0.06);
		sum2 = sum2 + (sum2 * 0.08);
	}
	if (day >= 241 && day < 366)
	{
		sum1 = sum1 + (sum1 * 0.12);
		sum2 = sum2 + (sum2 * 0.15);
	}
	
	if (sum < 100000)   
	{ 
		return sum1;  
	} else
	{
		return sum2;  
	}
}
