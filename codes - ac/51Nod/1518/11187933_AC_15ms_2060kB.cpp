#include<bits/stdc++.h>
using namespace std;
int f[20][20];
int main()
{ 
f[1][1]=0;
f[1][2]=1;
f[1][3]=0;
f[1][4]=0;
f[1][5]=0;
f[1][6]=0;
f[1][7]=0;
f[1][8]=0;
f[1][9]=0;
f[1][10]=0;
f[1][11]=0;
f[1][12]=0;
f[1][13]=0;
f[1][14]=0;
f[1][15]=0;
f[1][16]=0;
f[2][1]=1;
f[2][2]=0;
f[2][3]=0;
f[2][4]=0;
f[2][5]=0;
f[2][6]=0;
f[2][7]=0;
f[2][8]=0;
f[2][9]=0;
f[2][10]=0;
f[2][11]=0;
f[2][12]=0;
f[2][13]=0;
f[2][14]=0;
f[2][15]=0;
f[2][16]=0;
f[3][1]=0;
f[3][2]=0;
f[3][3]=0;
f[3][4]=0;
f[3][5]=0;
f[3][6]=0;
f[3][7]=0;
f[3][8]=0;
f[3][9]=0;
f[3][10]=0;
f[3][11]=0;
f[3][12]=0;
f[3][13]=0;
f[3][14]=0;
f[3][15]=0;
f[3][16]=0;
f[4][1]=0;
f[4][2]=0;
f[4][3]=0;
f[4][4]=0;
f[4][5]=0;
f[4][6]=0;
f[4][7]=0;
f[4][8]=0;
f[4][9]=0;
f[4][10]=0;
f[4][11]=0;
f[4][12]=0;
f[4][13]=0;
f[4][14]=0;
f[4][15]=0;
f[4][16]=0;
f[5][1]=0;
f[5][2]=0;
f[5][3]=0;
f[5][4]=0;
f[5][5]=0;
f[5][6]=6;
f[5][7]=0;
f[5][8]=108;
f[5][9]=0;
f[5][10]=1182;
f[5][11]=0;
f[5][12]=10338;
f[5][13]=0;
f[5][14]=79818;
f[5][15]=0;
f[5][16]=570342;
f[6][1]=0;
f[6][2]=0;
f[6][3]=0;
f[6][4]=0;
f[6][5]=6;
f[6][6]=0;
f[6][7]=124;
f[6][8]=62;
f[6][9]=1646;
f[6][10]=1630;
f[6][11]=18120;
f[6][12]=25654;
f[6][13]=180288;
f[6][14]=317338;
f[6][15]=1684956;
f[6][16]=3416994;
f[7][1]=0;
f[7][2]=0;
f[7][3]=0;
f[7][4]=0;
f[7][5]=0;
f[7][6]=124;
f[7][7]=0;
f[7][8]=13514;
f[7][9]=0;
f[7][10]=765182;
f[7][11]=0;
f[7][12]=32046702;
f[7][13]=0;
f[7][14]=136189727;
f[7][15]=0;
f[7][16]=378354090;
f[8][1]=0;
f[8][2]=0;
f[8][3]=0;
f[8][4]=0;
f[8][5]=108;
f[8][6]=62;
f[8][7]=13514;
f[8][8]=25506;
f[8][9]=991186;
f[8][10]=3103578;
f[8][11]=57718190;
f[8][12]=238225406;
f[8][13]=965022920;
f[8][14]=388537910;
f[8][15]=937145938;
f[8][16]=315565230;
f[9][1]=0;
f[9][2]=0;
f[9][3]=0;
f[9][4]=0;
f[9][5]=0;
f[9][6]=1646;
f[9][7]=0;
f[9][8]=991186;
f[9][9]=0;
f[9][10]=262834138;
f[9][11]=0;
f[9][12]=462717719;
f[9][13]=0;
f[9][14]=560132342;
f[9][15]=0;
f[9][16]=699538539;
f[10][1]=0;
f[10][2]=0;
f[10][3]=0;
f[10][4]=0;
f[10][5]=1182;
f[10][6]=1630;
f[10][7]=765182;
f[10][8]=3103578;
f[10][9]=262834138;
f[10][10]=759280991;
f[10][11]=264577134;
f[10][12]=712492587;
f[10][13]=886997066;
f[10][14]=577689269;
f[10][15]=510014880;
f[10][16]=807555438;
f[11][1]=0;
f[11][2]=0;
f[11][3]=0;
f[11][4]=0;
f[11][5]=0;
f[11][6]=18120;
f[11][7]=0;
f[11][8]=57718190;
f[11][9]=0;
f[11][10]=264577134;
f[11][11]=0;
f[11][12]=759141342;
f[11][13]=0;
f[11][14]=567660301;
f[11][15]=0;
f[11][16]=47051173;
f[12][1]=0;
f[12][2]=0;
f[12][3]=0;
f[12][4]=0;
f[12][5]=10338;
f[12][6]=25654;
f[12][7]=32046702;
f[12][8]=238225406;
f[12][9]=462717719;
f[12][10]=712492587;
f[12][11]=759141342;
f[12][12]=398579168;
f[12][13]=83006813;
f[12][14]=821419653;
f[12][15]=942235780;
f[12][16]=558077885;
f[13][1]=0;
f[13][2]=0;
f[13][3]=0;
f[13][4]=0;
f[13][5]=0;
f[13][6]=180288;
f[13][7]=0;
f[13][8]=965022920;
f[13][9]=0;
f[13][10]=886997066;
f[13][11]=0;
f[13][12]=83006813;
f[13][13]=0;
f[13][14]=690415372;
f[13][15]=0;
f[13][16]=620388364;
f[14][1]=0;
f[14][2]=0;
f[14][3]=0;
f[14][4]=0;
f[14][5]=79818;
f[14][6]=317338;
f[14][7]=136189727;
f[14][8]=388537910;
f[14][9]=560132342;
f[14][10]=577689269;
f[14][11]=567660301;
f[14][12]=821419653;
f[14][13]=690415372;
f[14][14]=796514774;
f[14][15]=696587391;
f[14][16]=175421667;
f[15][1]=0;
f[15][2]=0;
f[15][3]=0;
f[15][4]=0;
f[15][5]=0;
f[15][6]=1684956;
f[15][7]=0;
f[15][8]=937145938;
f[15][9]=0;
f[15][10]=510014880;
f[15][11]=0;
f[15][12]=942235780;
f[15][13]=0;
f[15][14]=696587391;
f[15][15]=0;
f[15][16]=856463275;
f[16][1]=0;
f[16][2]=0;
f[16][3]=0;
f[16][4]=0;
f[16][5]=570342;
f[16][6]=3416994;
f[16][7]=378354090;
f[16][8]=315565230;
f[16][9]=699538539;
f[16][10]=807555438;
f[16][11]=47051173;
f[16][12]=558077885;
f[16][13]=620388364;
f[16][14]=175421667;
f[16][15]=856463275;
f[16][16]=341279366;
int T,n,m;
while (scanf("%d%d",&n,&m)!=EOF)  
   printf("%d\n",f[n][m]);
}