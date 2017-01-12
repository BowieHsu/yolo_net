/***********************************************************************************************************************
* �ļ����ƣ�net_def.h
* ժ    Ҫ���涨net�еķ���ֵ
*
* ��ǰ�汾��0.1.0
* ��    �ߣ��첩��
* ��    �ڣ�2017-01-12
* ��    ע������
***********************************************************************************************************************/
#ifndef _NET_DEF_H_
#define _NET_DEF_H_

/***************************************************************************************************
* ״̬��
***************************************************************************************************/
//״̬����������
typedef int NET_STATUS;    //����ӿں�������ֵ������Ϊ������

//��������״̬����

//�㷨������ڿ�ͷ�ļ����Զ���״̬���ͣ��Զ���״̬����ֵ < -1000��
typedef enum _NET_STATUS_CODE
{
	//cpuָ�֧�ִ�����
	NET_STS_ERR_CPUID = -29,    //cpu��֧���Ż������е�ָ�

	//�ڲ�ģ�鷵�صĻ�����������
	NET_STS_ERR_STEP = -28,    //����step����ȷ����NET_IMAGE�ṹ��֮�⣩
	NET_STS_ERR_DATA_SIZE = -27,    //���ݴ�С����ȷ��һά����len����ά���ݵ�NET_SIZE��
	NET_STS_ERR_BAD_ARG = -26,    //������Χ����ȷ

	//�㷨�������ش����붨��
	NET_STS_ERR_EXPIRE = -25,    //�㷨��ʹ�����޴���
	NET_STS_ERR_ENCRYPT = -24,    //���ܴ���

	//����Ϊ����ӿں���ʹ�õĴ�������
	NET_STS_ERR_CALL_BACK = -23,    //�ص���������
	NET_STS_ERR_OVER_MAX_MEM = -22,    //����NET�޶�����ڴ�
	NET_STS_ERR_NULL_PTR = -21,    //��������ָ��Ϊ�գ����ã�

	//���NET_KEY_PARAM��NET_KEY_PARAM_LIST��Ա�����Ĵ�������
	NET_STS_ERR_PARAM_NUM = -20,    //param_num��������ȷ
	NET_STS_ERR_PARAM_VALUE = -19,    //value��������ȷ���߳�����Χ
	NET_STS_ERR_PARAM_INDEX = -18,    //index��������ȷ

	//���cfg_type, cfg_size, prc_type, in_size, out_size, func_type�Ƿ���ȷ
	NET_STS_ERR_FUNC_SIZE = -17,    //�Ӵ���ʱ���롢���������С����ȷ
	NET_STS_ERR_FUNC_TYPE = -16,    //�Ӵ������Ͳ���ȷ
	NET_STS_ERR_PRC_SIZE = -15,    //����ʱ���롢���������С����ȷ
	NET_STS_ERR_PRC_TYPE = -14,    //�������Ͳ���ȷ
	NET_STS_ERR_CFG_SIZE = -13,    //���á���ȡ�������롢����ṹ���С����ȷ
	NET_STS_ERR_CFG_TYPE = -12,    //���á���ȡ�������Ͳ���ȷ

	//���NET_IMAGE��Ա�����Ĵ�������
	NET_STS_ERR_IMG_DATA_NULL = -11,    //ͼ�����ݴ洢��ַΪ�գ�ĳ��������
	NET_STS_ERR_IMG_STEP = -10,    //ͼ������step������ƥ��
	NET_STS_ERR_IMG_SIZE = -9,     //ͼ���߲���ȷ���߳�����Χ
	NET_STS_ERR_IMG_FORMAT = -8,     //ͼ���ʽ����ȷ���߲�֧��

	//���NET_MEM_TAB��Ա�����Ĵ�������
	NET_STS_ERR_MEM_ADDR_ALIGN = -7,     //�ڴ��ַ���������Ҫ��
	NET_STS_ERR_MEM_SIZE_ALIGN = -6,     //�ڴ�ռ��С���������Ҫ��
	NET_STS_ERR_MEM_LACK = -5,     //�ڴ�ռ��С����
	NET_STS_ERR_MEM_ALIGN = -4,     //�ڴ���벻����Ҫ��
	NET_STS_ERR_MEM_NULL = -3,     //�ڴ��ַΪ��

	//���ability��Ա�����Ĵ�������
	NET_STS_ERR_ABILITY_ARG = -2,     //ABILITY������Ч����

	//ͨ������
	NET_STS_ERR = -1,     //��ȷ�����ʹ��󣨽ӿں������ã�
	NET_STS_OK = 0,     //������ȷ���ӿں������ã�
	NET_STS_WARNING = 1      //����

}NET_STATUS_CODE;


#endif //_NET_DEF_H_

