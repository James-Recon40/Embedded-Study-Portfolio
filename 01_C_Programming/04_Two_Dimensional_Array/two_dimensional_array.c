/* 인프런 137강 */
/* 주제: 2차원 배열 연습문제 */

/*
	2016년, 2017년, 2018년의 월별 평균 기온 데이터를 이용하여
	1. 전체 온도 데이터 출력
	2. 연도별 평균 기온 계산
	3. 3개년 월별 평균 기온 계산을 연습하는 예제
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MONTHS 12
#define YEARS 3

int main()
{
	/* ================================
   1. 연도별 월별 기온 데이터 준비
   ================================ */

	double year2016[MONTHS] = { -3.2, 0.2, 7.0,	14.1, 19.6, 23.6, 26.2, 28.0, 23.1, 16.1, 6.8, 1.2 };
	double year2017[MONTHS] = { -1.8, -0.2, 6.3, 13.9, 19.5, 23.3, 26.9, 25.9, 22.1, 16.4, 5.6, -1.9 };
	double year2018[MONTHS] = { -4.0, -1.6, 8.1, 13.0, 18.2, 23.1, 27.8, 28.8, 21.5, 13.1, 7.8, -0.6 };
	// 각 연도의 1월~12월 평균 기온을 1차원 배열로 저장

	/* ================================
	   2. 1차원 배열을 2차원 배열로 복사
	   ================================ */

	double arr[YEARS][MONTHS];
	for (int i = 0; i < MONTHS; i++)
	{
		arr[0][i] = year2016[i];
		arr[1][i] = year2017[i];
		arr[2][i] = year2018[i];
	} // arr[연도][월] 형태로 데이터를 관리하기 위해 2차원 배열에 복사


	/* ================================
	   3. 전체 월별 기온 데이터 출력
	   ================================ */

	printf("[Temperature Data]\n");
	printf("Year index\t: ");
	for (int m = 0; m < MONTHS; m++)
	{
		printf("\t%d ", m + 1);
	}
	printf("\n");


	for (int j = 0; j < YEARS; j++)
	{
		printf("Year %d\t\t:", j);
		for (int i = 0; i < MONTHS; i++)
		{
			printf("\t%.1f", arr[j][i]);
		}
		printf("\n");
	}
	printf("\n\n");

	/* ================================
	   4. 연도별 평균 기온 계산
	   ================================ */

	double sum[YEARS] = { 0.0 };
	for (int j = 0; j < YEARS; j++)
	{
		for (int i = 0; i < MONTHS; i++)
		{
			sum[j] += arr[j][i];

			// j는 연도 index, i는 월 index
			// sum[j]에 해당 연도의 12개월 기온 값을 누적한다.

			//if (j == 0)
			//	sum[j] += arr[j][i];
			//else if (j == 1)
			//	sum[j] += arr[j][i];
			//else if (j == 2)
			//	sum[j] += arr[j][i];
		}
	}

	printf("[Yearly average temperatures of 3 years]\n");
	for (int j = 0; j < YEARS; j++)
	{
		printf("Year %d : average temperature = %.1f\n", j, sum[j] / MONTHS);
	}
	printf("\n\n");

	/* ================================
	   5. 3개년 월별 평균 기온 계산
	   ================================ */

	printf("[Monthly average temperatures for 3 years]\n");

	printf("Year index\t: ");
	for (int m = 0; m < MONTHS; m++)
	{
		printf("\t%d ", m + 1);
	}
	printf("\n");

	double sum2[MONTHS] = { 0.0 };

	for (int i = 0; i < MONTHS; i++)
	{
		for (int j = 0; j < YEARS; j++)
		{
			sum2[i] += arr[j][i];
		}

	} // i는 월 index, j는 연도 index
	  // sum2[i]에 같은 월의 3개년 기온 값을 누적한다.

	printf("Avg temps\t:");
	for (int j = 0; j < MONTHS; j++)
	{
		printf("\t%.1f", sum2[j] / YEARS);
	}
	printf("\n");

	return 0;
}