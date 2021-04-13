#include<bits/stdc++.h>万能头文件
using namespace std;
string a;
signed main()
{
	cin>>a;
	int len=a.size();读取长度
	for(int i=len-1;i>=0;i--)反转
	cout<<a[i];
	return 0;
}
