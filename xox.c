#include<stdio.h>
void main()
{
    char c[3][3]; char s[3][3]; char w='0';
    int i,j,p,q,cnt=0,t=0;
    printf("START PLAYING : \n");
    printf("PLAYER 1 = X\nPLAYER 2 = O\n");
                while(cnt<9)
                {
                    printf("ENTER THE POSITION (index)\n");
                    scanf("%d%d",&p,&q);
                    if(cnt%2==0)
                    c[p][q]='X';
                    if(cnt%2!=0)
                    c[p][q]='O';
                    s[p][q]=c[p][q];
                    for(i=0;i<3;i++)
                    {
                    for(j=0;j<3;j++)
                    {
                    if(s[i][j]=='X'|| s[i][j]=='O')
                    printf("| %c |",s[i][j]);
                    else
                    printf("| _ |");
                    }
                    printf("\n");
                    }
                    if(s[0][0]==s[1][1] && s[1][1]==s[2][2])
                    {
                    w=s[0][0]; cnt=10;
                    }
                    else if(s[0][2]==s[1][1] && s[1][1]==s[2][0])
                    {
                    w=s[0][2]; cnt=10;
                    }
                    else if(s[0][0]==s[0][1] && s[0][1]==s[0][2])
                    {
                    w=s[0][2]; cnt=10;
                    }
                    else if(s[1][0]==s[1][1] && s[1][1]==s[1][2])
                    {
                    w=s[1][2]; cnt=10;
                    }
                    else if(s[2][0]==s[2][1] && s[2][1]==s[2][2])
                    {
                    w=s[2][2]; cnt=10;
                    }
                    else if(s[0][0]==s[1][0] && s[1][0]==s[2][0])
                    {
                    w=s[0][0]; cnt=10;
                    }
                    else if(s[0][1]==s[1][1] && s[1][1]==s[2][1])
                    {
                    w=s[0][1]; cnt=10;
                    }
                    else if(s[0][2]==s[1][2] && s[1][2]==s[2][2])
                    {
                    w=s[0][2]; cnt=10;
                    }
                    else if(w!='0')
                    cnt=10;
                    else
                    cnt++;
                } 
    if(w=='X')
    printf("PLAYER 1 IS THE WINNER \n");
    else if(w=='O')
    printf("PLAYER 2 IS THE WINNER \n");
    else
    printf("TIE GAME");
}