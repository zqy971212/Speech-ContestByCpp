#include "SpeechManager.h"

int main()
{
	srand(time(0));
	SpeechManager sm1;
	int choice=0;

	////����ѡ�ֵ���Ϣ
	//for (map<int,Speaker>::iterator it = sm1.m_Speaker.begin(); it != sm1.m_Speaker.end(); it++)
	//{
	//	cout << "��ţ�" << it->first << " ������" << it->second.m_Name <<" ������"<<it->second.m_Score[0]<< endl;
	//}

	while (true)
	{
		sm1.ShowMenu();

		//��������
		cin >> choice;

		switch (choice)
		{
			//��ʼ����
		case 1:
			sm1.StartSpeech();
			break;

			//�鿴�����¼
		case 2:
			sm1.showRecord();
			break;

			//��ձ�����¼
		case 3:
			sm1.clearRecord();
			break;

			//�˳�ϵͳ
		case 0:
			sm1.ExitSystem();
			break;

		default:
			cout << "��������ȷ��ָ�" << endl;
			system("pause");
			system("cls");
			break;
		}
			

	}


	system("pause");
	return 0;
}