#include <stdio.h>

int main(){
	long int a,b;
	scanf("%ld %ld",&a,&b);
	if(a>b) printf("a is big");
	else printf("b is big");
	return 0;
}

/*

1
3
1 2 3
4 5 6
7 8 9

3
3
1 2 3
4 5 6
7 8 9
5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
7
1 2 3 4 5 6 7
1 2 3 4 5 6 7
1 2 3 4 5 6 7
1 2 3 4 5 6 7
1 2 3 4 5 6 7
1 2 3 4 5 6 7
1 2 3 4 5 6 7

2
3
1 2 3
4 5 6
7 8 9
5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25

*/