#include<bits/stdc++.h>
#define rep(a,b,i) for(int i=a;i<=b;i++)
#define reps(a,b,i) for(int i=a;i>=b;i--)
#define sd(x) scanf("%d",&x)
#define ss(x) scanf("%s",x)
#define sc(x) scanf("%c",&x)
#define sf(x) scanf("%f",&x)
#define slf(x) scanf("%lf",&x)
#define slld(x) scanf("%lld",&x)
#define me(x,b) memset(x,b,sizeof(x))
#define pd(d) printf("%d\n",d)
#define plld(d) printf("%lld\n",d)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int a[301];
int main()
{
    a[1]=1;
    a[2]=0;
    a[3]=1;
    a[4]=1;
    a[5]=1;
    a[6]=1;
    a[7]=1;
    a[8]=2;
    a[9]=2;
    a[10]=2;
    a[11]=2;
    a[12]=3;
    a[13]=3;
    a[14]=3;
    a[15]=4;
    a[16]=5;
    a[17]=5;
    a[18]=5;
    a[19]=6;
    a[20]=7;
    a[21]=8;
    a[22]=8;
    a[23]=9;
    a[24]=11;
    a[25]=12;
    a[26]=12;
    a[27]=14;
    a[28]=16;
    a[29]=17;
    a[30]=18;
    a[31]=20;
    a[32]=23;
    a[33]=25;
    a[34]=26;
    a[35]=29;
    a[36]=33;
    a[37]=35;
    a[38]=37;
    a[39]=41;
    a[40]=46;
    a[41]=49;
    a[42]=52;
    a[43]=57;
    a[44]=63;
    a[45]=68;
    a[46]=72;
    a[47]=78;
    a[48]=87;
    a[49]=93;
    a[50]=98;
    a[51]=107;
    a[52]=117;
    a[53]=125;
    a[54]=133;
    a[55]=144;
    a[56]=157;
    a[57]=168;
    a[58]=178;
    a[59]=192;
    a[60]=209;
    a[61]=223;
    a[62]=236;
    a[63]=255;
    a[64]=276;
    a[65]=294;
    a[66]=312;
    a[67]=335;
    a[68]=361;
    a[69]=385;
    a[70]=408;
    a[71]=437;
    a[72]=471;
    a[73]=501;
    a[74]=530;
    a[75]=568;
    a[76]=609;
    a[77]=647;
    a[78]=686;
    a[79]=732;
    a[80]=784;
    a[81]=833;
    a[82]=881;
    a[83]=939;
    a[84]=1004;
    a[85]=1065;
    a[86]=1126;
    a[87]=1199;
    a[88]=1279;
    a[89]=1355;
    a[90]=1433;
    a[91]=1523;
    a[92]=1621;
    a[93]=1717;
    a[94]=1814;
    a[95]=1925;
    a[96]=2048;
    a[97]=2166;
    a[98]=2286;
    a[99]=2425;
    a[100]=2574;
    a[101]=2720;
    a[102]=2871;
    a[103]=3040;
    a[104]=3223;
    a[105]=3405;
    a[106]=3590;
    a[107]=3797;
    a[108]=4022;
    a[109]=4244;
    a[110]=4472;
    a[111]=4727;
    a[112]=5000;
    a[113]=5272;
    a[114]=5553;
    a[115]=5863;
    a[116]=6194;
    a[117]=6528;
    a[118]=6871;
    a[119]=7247;
    a[120]=7652;
    a[121]=8057;
    a[122]=8474;
    a[123]=8933;
    a[124]=9420;
    a[125]=9912;
    a[126]=10422;
    a[127]=10975;
    a[128]=11564;
    a[129]=12162;
    a[130]=12778;
    a[131]=13446;
    a[132]=14157;
    a[133]=14878;
    a[134]=15623;
    a[135]=16430;
    a[136]=17284;
    a[137]=18152;
    a[138]=19053;
    a[139]=20021;
    a[140]=21045;
    a[141]=22092;
    a[142]=23174;
    a[143]=24335;
    a[144]=25565;
    a[145]=26819;
    a[146]=28117;
    a[147]=29510;
    a[148]=30977;
    a[149]=32478;
    a[150]=34037;
    a[151]=35698;
    a[152]=37449;
    a[153]=39246;
    a[154]=41106;
    a[155]=43087;
    a[156]=45175;
    a[157]=47315;
    a[158]=49534;
    a[159]=51895;
    a[160]=54376;
    a[161]=56923;
    a[162]=59567;
    a[163]=62370;
    a[164]=65313;
    a[165]=68343;
    a[166]=71483;
    a[167]=74806;
    a[168]=78299;
    a[169]=81889;
    a[170]=85612;
    a[171]=89552;
    a[172]=93679;
    a[173]=97929;
    a[174]=102342;
    a[175]=106996;
    a[176]=111872;
    a[177]=116899;
    a[178]=122111;
    a[179]=127604;
    a[180]=133358;
    a[181]=139287;
    a[182]=145437;
    a[183]=151915;
    a[184]=158688;
    a[185]=165673;
    a[186]=172923;
    a[187]=180542;
    a[188]=188505;
    a[189]=196727;
    a[190]=205253;
    a[191]=214204;
    a[192]=223561;
    a[193]=233215;
    a[194]=243227;
    a[195]=253737;
    a[196]=264703;
    a[197]=276026;
    a[198]=287776;
    a[199]=300085;
    a[200]=312928;
    a[201]=326197;
    a[202]=339953;
    a[203]=354357;
    a[204]=369381;
    a[205]=384898;
    a[206]=400988;
    a[207]=417826;
    a[208]=435371;
    a[209]=453497;
    a[210]=472297;
    a[211]=491945;
    a[212]=512409;
    a[213]=533564;
    a[214]=555491;
    a[215]=578393;
    a[216]=602245;
    a[217]=626890;
    a[218]=652435;
    a[219]=679107;
    a[220]=706857;
    a[221]=735539;
    a[222]=765273;
    a[223]=796283;
    a[224]=828540;
    a[225]=861889;
    a[226]=896441;
    a[227]=932460;
    a[228]=969918;
    a[229]=1008633;
    a[230]=1048746;
    a[231]=1090544;
    a[232]=1133981;
    a[233]=1178881;
    a[234]=1225403;
    a[235]=1273839;
    a[236]=1324158;
    a[237]=1376183;
    a[238]=1430065;
    a[239]=1486137;
    a[240]=1544381;
    a[241]=1604580;
    a[242]=1666921;
    a[243]=1731778;
    a[244]=1799101;
    a[245]=1868692;
    a[246]=1940760;
    a[247]=2015678;
    a[248]=2093430;
    a[249]=2173805;
    a[250]=2257009;
    a[251]=2343473;
    a[252]=2433185;
    a[253]=2525904;
    a[254]=2621877;
    a[255]=2721578;
    a[256]=2824974;
    a[257]=2931833;
    a[258]=3042436;
    a[259]=3157269;
    a[260]=3276326;
    a[261]=3399377;
    a[262]=3526698;
    a[263]=3658841;
    a[264]=3795820;
    a[265]=3937360;
    a[266]=4083793;
    a[267]=4235730;
    a[268]=4393156;
    a[269]=4555821;
    a[270]=4724097;
    a[271]=4898608;
    a[272]=5079385;
    a[273]=5266173;
    a[274]=5459346;
    a[275]=5659619;
    a[276]=5867037;
    a[277]=6081309;
    a[278]=6302880;
    a[279]=6532529;
    a[280]=6770288;
    a[281]=7015885;
    a[282]=7269818;
    a[283]=7532903;
    a[284]=7805213;
    a[285]=8086491;
    a[286]=8377243;
    a[287]=8678385;
    a[288]=8990032;
    a[289]=9311875;
    a[290]=9644512;
    a[291]=9988954;
    a[292]=10345290;
    a[293]=10713259;
    a[294]=11093525;
    a[295]=11487140;
    a[296]=11894267;
    a[297]=12314650;
    a[298]=12748980;
    a[299]=13198445;
    a[300]=13663248;
    int n;
    while(~sd(n)){
        pd(a[n]);
    }
    return 0;
}
