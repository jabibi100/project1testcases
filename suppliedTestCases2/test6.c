/* test nested if*/
int testif(int i){
  
  int a1, b, c, a4;

  if (i ==1) {
    printf("now i = 1\n");
    a1 = 10;
    return i+a1;
  }else {
    printf("now i!=1\n");
    if (i == 2) {
      a1 = 10;
      b = 10;
      printf ("now i = 2\n");
      return a1+b+i;
    }
  }
  a1 = 10;
  printf("%d %d %d \n", a1, b, c);
  return;
}

int main()
{
  int i;
  printf("i=:");
  scanf("%d", &i);
  i = testif(i);
    
}
