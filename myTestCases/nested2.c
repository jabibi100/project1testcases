void main()
{
	int   x, y, z = 1;//1 2 3
	
	if(x){//4
	  y = 3;//5
	}else{
	switch (z + 1)//6
	{	
		case 0:
			if(z){//7
				x = 3;//8
			}
		case 1:
			y = 4;//9
		break;//10
		

		case 4:
			y = 3;//11
		break;//12
		
		default:
			y = 1;//13
	}
	}
	
		x = y + z;//14
        return x;//15
}
