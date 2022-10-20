int len(int x)
{
	int cnt = 0;
	if(x == 0) return 1;
	if(x > 0)
	{
		while(x)
		{
			x/=10;
			++cnt;
		}
	}
	if(x<0){
		cnt = 1;
		x=-x;
		x/=10;
		++cnt;
	}
	return cnt;
}