#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
using namespace std;
ll a[30][30];
int main()
{
    a[1][1]=1;
    a[1][2]=2;
    a[1][3]=3;
    a[1][4]=4;
    a[1][5]=5;
    a[1][6]=6;
    a[1][7]=7;
    a[1][8]=8;
    a[1][9]=9;
    a[1][10]=10;
    a[1][11]=11;
    a[1][12]=12;
    a[1][13]=13;
    a[1][14]=14;
    a[1][15]=15;
    a[1][16]=16;
    a[1][17]=17;
    a[1][18]=18;
    a[1][19]=19;
    a[1][20]=20;
    a[2][2]=2;
    a[2][3]=5;
    a[2][4]=9;
    a[2][5]=14;
    a[2][6]=20;
    a[2][7]=27;
    a[2][8]=35;
    a[2][9]=44;
    a[2][10]=54;
    a[2][11]=65;
    a[2][12]=77;
    a[2][13]=90;
    a[2][14]=104;
    a[2][15]=119;
    a[2][16]=135;
    a[2][17]=152;
    a[2][18]=170;
    a[2][19]=189;
    a[2][20]=209;
    a[3][3]=5;
    a[3][4]=14;
    a[3][5]=28;
    a[3][6]=48;
    a[3][7]=75;
    a[3][8]=110;
    a[3][9]=154;
    a[3][10]=208;
    a[3][11]=273;
    a[3][12]=350;
    a[3][13]=440;
    a[3][14]=544;
    a[3][15]=663;
    a[3][16]=798;
    a[3][17]=950;
    a[3][18]=1120;
    a[3][19]=1309;
    a[3][20]=1518;
    a[4][4]=14;
    a[4][5]=42;
    a[4][6]=90;
    a[4][7]=165;
    a[4][8]=275;
    a[4][9]=429;
    a[4][10]=637;
    a[4][11]=910;
    a[4][12]=1260;
    a[4][13]=1700;
    a[4][14]=2244;
    a[4][15]=2907;
    a[4][16]=3705;
    a[4][17]=4655;
    a[4][18]=5775;
    a[4][19]=7084;
    a[4][20]=8602;
    a[5][5]=42;
    a[5][6]=132;
    a[5][7]=297;
    a[5][8]=572;
    a[5][9]=1001;
    a[5][10]=1638;
    a[5][11]=2548;
    a[5][12]=3808;
    a[5][13]=5508;
    a[5][14]=7752;
    a[5][15]=10659;
    a[5][16]=14364;
    a[5][17]=19019;
    a[5][18]=24794;
    a[5][19]=31878;
    a[5][20]=40480;
    a[6][6]=132;
    a[6][7]=429;
    a[6][8]=1001;
    a[6][9]=2002;
    a[6][10]=3640;
    a[6][11]=6188;
    a[6][12]=9996;
    a[6][13]=15504;
    a[6][14]=23256;
    a[6][15]=33915;
    a[6][16]=48279;
    a[6][17]=67298;
    a[6][18]=92092;
    a[6][19]=123970;
    a[6][20]=164450;
    a[7][7]=429;
    a[7][8]=1430;
    a[7][9]=3432;
    a[7][10]=7072;
    a[7][11]=13260;
    a[7][12]=23256;
    a[7][13]=38760;
    a[7][14]=62016;
    a[7][15]=95931;
    a[7][16]=144210;
    a[7][17]=211508;
    a[7][18]=303600;
    a[7][19]=427570;
    a[7][20]=592020;
    a[8][8]=1430;
    a[8][9]=4862;
    a[8][10]=11934;
    a[8][11]=25194;
    a[8][12]=48450;
    a[8][13]=87210;
    a[8][14]=149226;
    a[8][15]=245157;
    a[8][16]=389367;
    a[8][17]=600875;
    a[8][18]=904475;
    a[8][19]=1332045;
    a[8][20]=1924065;
    a[9][9]=4862;
    a[9][10]=16796;
    a[9][11]=41990;
    a[9][12]=90440;
    a[9][13]=177650;
    a[9][14]=326876;
    a[9][15]=572033;
    a[9][16]=961400;
    a[9][17]=1562275;
    a[9][18]=2466750;
    a[9][19]=3798795;
    a[9][20]=5722860;
    a[10][10]=16796;
    a[10][11]=58786;
    a[10][12]=149226;
    a[10][13]=326876;
    a[10][14]=653752;
    a[10][15]=1225785;
    a[10][16]=2187185;
    a[10][17]=3749460;
    a[10][18]=6216210;
    a[10][19]=10015005;
    a[10][20]=15737865;
    a[11][11]=58786;
    a[11][12]=208012;
    a[11][13]=534888;
    a[11][14]=1188640;
    a[11][15]=2414425;
    a[11][16]=4601610;
    a[11][17]=8351070;
    a[11][18]=14567280;
    a[11][19]=24582285;
    a[11][20]=40320150;
    a[12][12]=208012;
    a[12][13]=742900;
    a[12][14]=1931540;
    a[12][15]=4345965;
    a[12][16]=8947575;
    a[12][17]=17298645;
    a[12][18]=31865925;
    a[12][19]=56448210;
    a[12][20]=96768360;
    a[13][13]=742900;
    a[13][14]=2674440;
    a[13][15]=7020405;
    a[13][16]=15967980;
    a[13][17]=33266625;
    a[13][18]=65132550;
    a[13][19]=121580760;
    a[13][20]=218349120;
    a[14][14]=2674440;
    a[14][15]=9694845;
    a[14][16]=25662825;
    a[14][17]=58929450;
    a[14][18]=124062000;
    a[14][19]=245642760;
    a[14][20]=463991880;
    a[15][15]=9694845;
    a[15][16]=35357670;
    a[15][17]=94287120;
    a[15][18]=218349120;
    a[15][19]=463991880;
    a[15][20]=927983760;
    a[16][16]=35357670;
    a[16][17]=129644790;
    a[16][18]=347993910;
    a[16][19]=811985790;
    a[16][20]=1739969550;
    a[17][17]=129644790;
    a[17][18]=477638700;
    a[17][19]=1289624490;
    a[17][20]=3029594040;
    a[18][18]=477638700;
    a[18][19]=1767263190;
    a[18][20]=4796857230;
    a[19][19]=1767263190;
    a[19][20]=6564120420;
    a[20][20]=6564120420;
    ll n,m;
    while(cin>>n>>m){
        cout<<a[m][n]<<endl;
    }
}
