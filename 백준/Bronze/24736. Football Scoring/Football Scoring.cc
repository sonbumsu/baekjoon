#include <stdio.h>

int main(void) 
{
	int score[2], win[5];
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      scanf("%d", &win[j]);
    }
    score[i] = win[0] * 6 + win[1] * 3 + win[2] * 2 + win[3] + win[4] * 2;
    
  }
  
  for (int i = 0; i < 2; i++)
  {
    printf("%d ", score[i]);
  }
  
  
}