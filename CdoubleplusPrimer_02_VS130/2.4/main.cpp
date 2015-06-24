int main(){
	// 2.26
	{
		//const int buf; // 초기화를 안해줘서 bad
		int cnt = 0; // good
		const int sz = cnt; // good
		cnt++; // good
		//sz++ // bad, 한정자 변수는 수정 불가
	}

	// 2.27
	{
		//int i = -1, &r = 0; // bad 참조자는 직접 값으로 초기화 불가
		//int *const p2 = *i2; // i2가 정의 되어있지 않으므로 불가
		//const int i = -1; &r = 0; // bad 참조자는 직접 값으로 초기화 불가
		//const int *const p3 = &i2; // bad, i2가 정의되어 있지 않다.
		//const int *p1 = &i2; // i2 미정의
		//const int &const r2; // 미초기화
		//const int i2 = i, &r = i; // 미초기화
		// 만약 위 문제들이 순서대로 나열되있다면 모두 미초기화 되어 컴파일 되지 않는다.
	}

	// 2.28
	{
		//int i, *const cp;
		//int *p1, *const p2;
		//const int ic, &r = ic;
		//const int *const p3;
		//이상 한정자에 대한 초기화를 안해주었으므로 실패
		const int *p; // 포인터이므로 미초기화해도 일단 컴파일은 됨..
	}

	// 2.29
	{
		int i = -1;
		const int ic = i;
		int *const p2 = &i;
		i = ic; // good
		const int *p1;
		const int *const p3 = &ic;
		p1 = p3; // good

		p1 = &ic; // good

		//p3 = &ic; // not good 한정자에 대한 포인터
		//p2 = p1; // not good 포인터 한정자
		//ic = *p3; // not good 한정자 수정불가
	}
	return 0;
}