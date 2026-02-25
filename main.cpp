#include <iostream>

using namespace std;

/*int main()
{
	int Number1;
	int Number2;

	cin >> Number1;
	cin >> Number2;
	cout << Number1 + Number2 + 3 * Number1 - 5 * Number2 << endl;
	cout << "Hello, World!" << endl;

	return 0;
}*/

/*int main()
{
	int Array[10] = { 0, };
	
	// 배열의 첫 번째 주소값 출력
	cout << Array << endl;
	
	// 배열 값 출력
	cout << Array[0] << endl;
	cout << Array[1] << endl;

	// 주의!
	// Array [0][][][][][][][][][9]
	int Index = 10;
	cout << Array[Index] << endl;

	return 0;
}*/

/*int main()
{
	// Array [0][][][3]
	//       [0][][][3]
	//       [0][][][3]
	//       [0][][][3]
	//
	//       [0][][][3][0][][][3][0][][][3][0][][][3]  (실제 메모리)

	int Array[4][4] = {0,};

	return 0;
}*/

/*int main()
{
	bool bEnd = true;	// false

	if (bEnd)	// true
	{
		cout << "A" << endl;
	}
	else	// false
	{
		cout << "B" << endl;
	}

	return 0;
}*/

/*int main()
{
	// 계속 실행
	for (int i = 0; true;)
	{
		cout << "for" << endl;
	}
	return 0;
}

int main()
{
	// 비교 연산자 >, <, >=, <=. !=, ==
	bool Result = 10 == 100;
	cout << Result << endl;

	return 0;
}*/

/*int main()
{
	int Array[10];

	for (int i = 0; i < 10; i++)
	{
		Array[i] = i + 1;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << Array[i] << ", ";
	}

	return 0;
}*/

int main()
{
	int Result1 = 0;	// 1~100 합
	int Result2 = 0;	// 1~100 짝수 합
	int Result3 = 0;	// 1~100 홀수 합
	int Result4 = 0;	// 1~100 3의 배수 합

	for (int i = 1; i <= 100; i++)
	{	
		Result1 += i;
	}

	for (int j = 2; j <= 100; j += 2)
	{
		Result2 += j;
	}

	for (int k = 1; k <= 100; k += 2)
	{
		Result3 += k;
	}

	for (int p = 3; p <= 100; p += 3)
	{
		Result4 += p;
	}

	cout << Result1 << endl;
	cout << Result2 << endl;
	cout << Result3 << endl;
	cout << Result4 << endl;

	return 0;
}
