#include "SpeechManager.h"

int main()
{
	srand(time(0));
	SpeechManager sm1;
	int choice=0;

	////测试选手的信息
	//for (map<int,Speaker>::iterator it = sm1.m_Speaker.begin(); it != sm1.m_Speaker.end(); it++)
	//{
	//	cout << "编号：" << it->first << " 姓名：" << it->second.m_Name <<" 分数："<<it->second.m_Score[0]<< endl;
	//}

	while (true)
	{
		sm1.ShowMenu();

		//接受输入
		cin >> choice;

		switch (choice)
		{
			//开始比赛
		case 1:
			sm1.StartSpeech();
			break;

			//查看往届记录
		case 2:
			sm1.showRecord();
			break;

			//清空比赛记录
		case 3:
			sm1.clearRecord();
			break;

			//退出系统
		case 0:
			sm1.ExitSystem();
			break;

		default:
			cout << "请输入正确的指令！" << endl;
			system("pause");
			system("cls");
			break;
		}
			

	}


	system("pause");
	return 0;
}