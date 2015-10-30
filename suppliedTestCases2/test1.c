void foo(int i)
{
   int b;
   if (i) b = 1;
   printf("b = %d", b);
   b = 3;
   if (i) b = 1;
   else b = 2;
}
main()
{
   foo(0);
}

