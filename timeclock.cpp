#include <iostream>

using namespace std;

int main()
{
	int time1,hh1,mm1,ss1;
	int time2,hh2,mm2,ss2;
	scanf("%d:%d:%d",&hh1,&mm1,&ss1);
	scanf("%d:%d:%d",&hh2,&mm2,&ss2);
	time1 = hh1*3600+mm1*60+ss1;
	time2 = hh2*3600+mm2*60+ss2;
	if(time2 >= time1) printf("%d",time2-time1);
	if(time2 < time1) printf("%d",time2+86400-time1);
 	return 0;
}