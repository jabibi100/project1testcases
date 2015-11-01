/*global*/

int a,b,c;//1,2,3


void init()
{
   a = 1;//4
}


main()
{
  int k = 10;//5

  printf("Please input 1st value: ");//6
  scanf("%d", &k);//7

  while (k>5){//8
    init();//9
    b = a+1;//10
    if (b<5) {//11
    c = b+5;//12
    }
    printf("%d, %d\n", a, b, c, k);//13
    k = k-1;//14
  }
  init();//15
  printf("%d %d %d\n",a, b,c);//16
}

