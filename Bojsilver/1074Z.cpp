//#include<iostream>
//#include<vector>
//#include<cmath>
//
//using namespace std;
//
//int visit( int n,int r,int c)  //r=x c=y
//{
//	int a = pow(2, n - 1); //2^n-1
//	int b = pow(2, n);//2^n
//	
//
//	if (n < 1) //��� �������� 
//		return 0;
//	if (r >= 0 && r < a) //1,2����
//	{
//		if (c >= 0 && c < a)//1����
//			return visit(n - 1, r, c);
//		else if (c >= a && c < b) //2���� 
//			return a*a + visit(n - 1, r, c-a);
//	}
//	else if (r >= a && r < b) //3,4,���� 
//	{
//		if (c >= 0 && c < a)//3����
//			return 2 * a*a + visit(n - 1, r - a, c);
//		else if (c >= a && c < b)
//			return 3 * a*a + visit(n - 1, r - a, c - a);
//	}
//}
//
//int main()
//{
//	int n, r, c; //r�� c�� ã��
//
//	cin >>n>> r >> c;
//	cout << visit(n, r, c) ;
//
//
//}