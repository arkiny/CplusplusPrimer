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
	return 0;
}