//��:��:�� ��ȯ�� �ڵ�
#include <stdio.h>
int main()
{
    int total_seconds;              // �Է¹��� ��ü ��
    int hours, minutes, seconds;    // ��� ���: ��, ��, ��


    printf("�ʸ� �Է��ϼ���: ");    // ����ڷκ��� ��ü �� �Է� �ޱ�
    scanf_s("%d", &total_seconds);

    hours = total_seconds / 3600;             // �ð� ���: ��ü �ʸ� 3600���� ���� ���� �ð�

    minutes = (total_seconds % 3600) / 60;    // ���� �� �߿��� �� ���: 3600���� ���� �������� 60���� ���� ��

    seconds = total_seconds % 60;             // ���� �� �߿��� �� ���: 60���� ���� ������


    printf("%d�ʴ� %d�ð� %d�� %d���Դϴ�.\n", total_seconds, hours, minutes, seconds);   // ��� ���

    return 0;

}
