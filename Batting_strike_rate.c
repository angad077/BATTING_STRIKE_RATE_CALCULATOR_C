#include <stdio.h>

int main()
{
    int StrikeRate, BallFaced, RunScored;
    int Formula;
    printf("Enter your run scored by batsman --> ");
    scanf("%d", &RunScored);
    printf("Enter your BallFaced by batsman --> ");
    scanf("%d", &BallFaced);
    Formula = (RunScored / BallFaced) * 100;
    printf("Batsman strike rate is %d", Formula);
    return 0;
}