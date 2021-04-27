解法1：#include<bits/stdc++.h>万能头文件
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


解法2：#include<stdio.h>
int main()
{
	printf("%c%c%c%c%c", getchar(), getchar(), getchar(), getchar(), getchar());
	return 0;
} //printf 函数的一个重要特性：参数从后往前读取。 即：
//printf("%u %u\n", work1(), work2())会先执行work2()再执行work1()。
