#include<iostream>
#include<windows.h> 
using namespace std;
//��Ϸ������Operation
//ʹ��Windows.hͷ�ļ�
class Operation
{
	public:
		void GameStart(); //������Ϸ��ʼ
		void Init(); //��ʼ����Ϸ,��������
		void Quit(); //�˳���Ϸ
		void NewGame();//��ʼ����Ϸ��
		void GameOver();//������Ϸ
		void StopGame();//��ͣ��Ϸ
		void paintEvent();//���ƽ��棬���ر�������Ƶ
		void keypressEvent();//�����¼�����
	//�������
		void NewBlock();//��������·���
		void Rotate(); //��ת����
		void Left(); //���Ʒ���
		void Right();//���Ʒ���
		void Down();//���Ʒ���
		void Sink();//���׷���
		bool detect();//��ײ���
		void clearBlocke();//�жϡ���������
		void createBlocke();//��������ֶ������
	private:
		//Board *board;//��Ϸ�ĵ�ͼ��Ϣ
		//Player *player1��*player2;//��Ϸ�����
};
