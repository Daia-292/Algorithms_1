#include <iostream>
using namespace std;

//1
int sumOfSquares(int n) {
	if (n <= 1){
		return n;
	}
	return n * n + sumOfSquares(n-1);
}

//2
int sumArray(int arr[], int n) {
	if (n == 0)
		return 0;
	return arr[n - 1] + sumArray(arr, n - 1);
}

//3
int sum(int n) {
	if (n == 1)
		return 1;
	return n + sum(n - 1);
}

//4
int power(int b, int n) {
	if (n == 0)
		return 1;
	return b * power(b, n - 1);
}
int sumOfPowers(int b, int n) {
	if (n == 0)
		return 1;
	return power(b, n) + sumOfPowers(b, n - 1);
}

//5
void reversePrint(int n) {
	if (n == 0)
		return ;

	int x;
	cin >> x;
	reversePrint(n - 1);
	cout << x << " ";
}

//6
void reverseStrings(int n) {
	if (n == 0)
		return;

	char str[20];
	cin >> str;

	reverseStrings(n - 1);
	cout << str << endl;
}

//7
int a[100][100];
void spiralFill(int top, int bottom, int left, int right, int& num) {
	if (top > bottom || left > right)
		return;

	for (int i = left; i <= right; i++)
		a[top][i] = num++;

	for (int i = top + 1; i <= bottom; i++)
		a[i][right] = num++;

	if (top < bottom) {
		for (int i = right - 1; i >= left; i--)
			a[bottom][i] = num++;
	}

	if (left < right) {
		for (int i = bottom - 1; i > top; i--)
			a[i][left] = num++;
	}
	spiralFill(top + 1, bottom - 1, left + 1, right - 1, num);
}

//8
int arr[100];
void generate(int pos, int n, int k) {
	if (pos == n) {
		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << endl;
		return;
	}

	for (int i = 1; i <= k; i++) {
		arr[pos] = i;
		generate(pos + 1, n, k);
	}
}

//9
void permute(char str[], int l, int r) {
	if (l == r) {
		cout << str ;
		return;
	}

	for (int i = l; i <= r; i++) {
		char temp = str[l];
		str[l] = str[i];
		str[i] = temp;

		permute(str, l + 1, r);

		temp = str[l];
		str[l] = str[i];
		str[i] = temp;
	}
}

//10
bool isPowerOfTwo(int n) {
	return (n > 0) && ((n & (n - 1)) == 0);
}

int main()
{
	//1
	//int n;
	//cin >> n;
	//cout << sumOfSquares(n);

	//2
	/*int n, g;
	int arr[30];
	cin >> n >> g;
	for (int i = 0;i < g;i++) {
		cin >> arr[i];
	}
	cout << sumArray(arr, n);*/

	////3
	//int n;
	//cin >> n;
	//cout << sum(n);

	////4
	//int b, n;
	//cin >> b >> n;
	//cout << sumOfPowers(b, n);
	//return 0;

	////5
	//int n;
	//cin >> n;
	//reversePrint(n);
	//return 0;

	////6
	//int n;
	//cin >> n;
	//reverseStrings(n);
	//return 0;

	////7
	//int n;
	//cin >> n;
	//int num = 1;
	//spiralFill(0, n - 1, 0, n - 1, num);
	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < n; j++)
	//		cout << a[i][j] << " ";
	//	cout << endl;
	//}

	////8
	//int n, k;
	//cin >> n >> k;
	//generate(0, n, k);

	////9
	//char str[20];
	//cin >> str;
	//int len = 0;
	//while (str[len] != '\0' ) len++;  
	//permute(str, 0, len - 1);

	//10
	for (int i = 0; i <= 9; i++) {
		if (isPowerOfTwo(i)) {
			cout << i << " is a power of two" << endl;
		}
		else {
			cout << i << " is not a power of two" << endl;
		}
	}
	for (int i = 10; i <= 32; i += 2) {
		if (isPowerOfTwo(i)) {
			cout << i << " is a power of two" << endl;
		}
		else {
			cout << i << " is not a power of two" << endl;
		}
	}

}


