#include"head.h"
void q1()
{
	char a = 101;//整型提升 0000 0000 0000 0000 0000 0000 0110 0101
	int sum = 200;//
	a += 27;//整型提升 0000 0000 0000 0000 0000 0000 0110 0101 + 0000 0000 0000 0000 0000 0000 0001 1011
	//取得补码相加得：0000 0000 0000 0000 0000 0000 1000 0000
	//因为char类型只能有8字节，所以得补码：1000 0000
	//因为要转化为整形，所以对1000 0000整形提升得补码：1111 1111 1111 1111 1111 1111 1000 0000
	//取原码得1000 0000 0000 0000 0000 0000 1000 0000=-128
	sum += a;//sum是整形，直接200-128=328
	printf("%d", sum);
}