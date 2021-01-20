#include <stdio.h>
int main()
{
  int k,m,n,c; // introducing variables
  
  k = 3;
  m = 4;
  n = 0;
  if (m == k || m == n || k == n){ // the condition does not match the task
    printf ("Условие не соотвествует заданию");
  }else { // performing a task
    if (n<m){
      c = n;
      n = m;
      m = c;
      } if (m < k){
      c = m;
      m = k;
      k = c;
      } if (n < m){
      c = n;
      n = m;
      m = c;
    }


    printf ("%d\n", k);
    printf ("%d\n", m);
    printf ("%d\n", n);
  }

  return 0;
}
