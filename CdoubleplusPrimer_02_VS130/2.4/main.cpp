int main(){
	// 2.26
	{
		//const int buf; // �ʱ�ȭ�� �����༭ bad
		int cnt = 0; // good
		const int sz = cnt; // good
		cnt++; // good
		//sz++ // bad, ������ ������ ���� �Ұ�
	}

	// 2.27
	{
		//int i = -1, &r = 0; // bad �����ڴ� ���� ������ �ʱ�ȭ �Ұ�
		//int *const p2 = *i2; // i2�� ���� �Ǿ����� �����Ƿ� �Ұ�
		//const int i = -1; &r = 0; // bad �����ڴ� ���� ������ �ʱ�ȭ �Ұ�
		//const int *const p3 = &i2; // bad, i2�� ���ǵǾ� ���� �ʴ�.
		//const int *p1 = &i2; // i2 ������
		//const int &const r2; // ���ʱ�ȭ
		//const int i2 = i, &r = i; // ���ʱ�ȭ
		// ���� �� �������� ������� �������ִٸ� ��� ���ʱ�ȭ �Ǿ� ������ ���� �ʴ´�.
	}

	// 2.28
	{
		//int i, *const cp;
		//int *p1, *const p2;
		//const int ic, &r = ic;
		//const int *const p3;
		//�̻� �����ڿ� ���� �ʱ�ȭ�� �����־����Ƿ� ����
		const int *p; // �������̹Ƿ� ���ʱ�ȭ�ص� �ϴ� �������� ��..
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

		//p3 = &ic; // not good �����ڿ� ���� ������
		//p2 = p1; // not good ������ ������
		//ic = *p3; // not good ������ �����Ұ�
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
		// decltype������ �߷��� ��� ǥ������ ���Ŀ� ����
	}
	return 0;
}