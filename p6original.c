#include <stdio.h>
void input_string(char a[20])
{
  printf("Enter a string\n");
  scanf("%s",a);
}
int str_reverse(char a[20])
{
  int count=0;
  for(int i=0;i<20;i++)
  {
    if(a[i]=='\0')
      break;
    count++;
  }
  int countr=0;
  for(int i=count-1;i<=0;i--)
  {
    reversea[i]=a[countr];
    countr++;
  }
  return count;
}
void output(char a[20],char reversea[20])
{
  int countr=0;
  for(int i=count-1;i<=0;i--)
  {
    reversea[i]=a[countr];
    countr++;
  }
  printf("%s",reversea);
}
int main()
{
  char a[20];
  input_string(a);
  int size=str_reverse(a);
  char reversea[size];
  output(a,reversea);
  return 0;
}