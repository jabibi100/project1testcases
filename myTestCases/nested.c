void main()
{
	int   x, y, z = 1; //1 2 3

	switch (z + 1)//4
	{	
		case 0:
			if(z){//5
				x = 3;//6
			}
		case 1:
			while(1){//7
				z = 1;//8
				if(z) break;//9 10
			}
			y = 4;//11
		break;//12
		

		case 4:
			y = 3;//13
		break;//14
		
		default:
			y = 1;//15
	}
	
		x = y + z;//16
		int a;//17
		int q = 2+2+2+2+2;//18
        return x;//19
}
