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

	//2.30
	{
		const int  v2 = 0;
		int v1 = v2;
		int *p1 = &v1, &r1 = v1;
		const int *p2 = &v2, /**const p3 = &i,*/ &r2 = v2;
		
		//2.31
		r1 = v2;
		//p1 = p2;
		p2 = p1;
		//p1 = p3;
		//p2 = p3; 
	}

	// 2.32
	{
		constexpr int null = 0, *p = null;
	}

	// 2.33
	{
		int i = 0, &r = i;
		auto a = r;

		const int ci = i, &cr = ci;
		auto b = ci;
		auto c = cr;
		auto d = &i;
		auto e = &ci;
		const auto f = ci; 

		auto &g = ci; // const int &
		//auto &h = 42; 
		const auto &j = 42;

		auto k = ci, &l = i; // k is int, l in int&
		auto &m = ci, *p = &ci; // m in const int&, p const int
		auto &n = i/*, *p2 = &ci*/; // ci is const int

		a = 42; // (int) a = 42;
		b = 42; // (int) b = 42;
		c = 42; // (int) c = 42;
		//d = 42; // (int*) d = 42 ->bad
		//e = 42; // (const int*) e = 42 -> bad
		//g = 42; // const int &g = 42// const reference
	}

	// 2.34 pass
	{

	}

	// 2.35
	{
		const int i = 42;
		auto j = i; // int
		const auto &k = i; // const int &
		auto *p = &i; // const int *
		const auto j2 = i, // const int
		&k2 = i; //const int &
	}

	// 2.36
	{
		int a = 3, b = 4;
		decltype(a) c = a; // int c = a;
		decltype((b)) d = a; // int& d = a;
		++c; // c = 4;
		++d; // a = 4;
	}

	// 2.37
	{
		int a = 3, b = 4;
		decltype(a) c = a;  // int c = a;
		decltype(a = b) d = a; // int& d = a;
	}

	// 2.38
	{
		// decltype에서의 추론은 대상 표현식의 형식에 의존
	}
	return 0;
}