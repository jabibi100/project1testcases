float c; //1
void confuse(int a, int b)
{
	while( 0)//2
	{
		if (c > 0)//3
		{
			c--;
			continue;//4
		}
		else
		{
			break;//5

		}
	}
}

int main()
{
	int a = 12;//6
	int b = a;//7
	c = 25;//8
	confuse(a, b);//9
}
