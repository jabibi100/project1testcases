/*
Should be reported in output.txt
main:x
hint: CALL_EXPR_FN() ;)
 */

void foo(int i)
{
	int a;
	scanf("This does the def: %d", &a);
	if (i) a = 1;
	printf("I should be initialized!! -->%d", a);
}

main()
{
	int x;
	//These should not define x only scanf
	printf("Address of x: %x ", &x);
	foo(&x);
	
	printf("I'm not initialized!!--> %d\n", x);
}
