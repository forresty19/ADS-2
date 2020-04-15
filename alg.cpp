int countPairs1(int* arr, int len, int value)
{
	int res = 0;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (arr[i] + arr[j] == value)
				res++;
		}

	}
	return res;
}
int countPairs2(int* arr, int len, int value)
{
	int res = 0;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = len - 1; j > i; j--)
		{
			if (arr[i] + arr[j] == value)
			{
				res++;
            }
		}
	}
	return res;
}
int countPairs3(int* arr, int len, int value)
{
	int res = 0;
	for (int i = 0; i < len - 1; i++)
	{
		int first = i, last = len;

		while (first < last - 1)
		{
			int mid = (first + last) / 2;
			if (arr[i] + arr[mid] == value)
			{
				res++;
				int j = mid + 1;
				while (arr[i] + arr[j] == value && j < last)
				{
					res++;
					j++;
				}
				j = mid - 1;
				while (arr[i] + arr[j] == value && j > first)
				{
					res++;
					j--;
				}
				break;
			}
			if (arr[i] + arr[mid] > value)
				last = mid;
			else
				first = mid;
		}
    }
	return res;
}
