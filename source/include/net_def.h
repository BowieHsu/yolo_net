/***********************************************************************************************************************
* 文件名称：net_def.h
* 摘    要：规定net中的返回值
*
* 当前版本：0.1.0
* 作    者：徐博文
* 日    期：2017-01-12
* 备    注：创建
***********************************************************************************************************************/
#ifndef _NET_DEF_H_
#define _NET_DEF_H_

/***************************************************************************************************
* 状态码
***************************************************************************************************/
//状态码数据类型
typedef int NET_STATUS;    //组件接口函数返回值都定义为该类型

//函数返回状态类型

//算法库可以在库头文件中自定义状态类型，自定义状态类型值 < -1000。
typedef enum _NET_STATUS_CODE
{
	//cpu指令集支持错误码
	NET_STS_ERR_CPUID = -29,    //cpu不支持优化代码中的指令集

	//内部模块返回的基本错误类型
	NET_STS_ERR_STEP = -28,    //数据step不正确（除NET_IMAGE结构体之外）
	NET_STS_ERR_DATA_SIZE = -27,    //数据大小不正确（一维数据len，二维数据的NET_SIZE）
	NET_STS_ERR_BAD_ARG = -26,    //参数范围不正确

	//算法库加密相关错误码定义
	NET_STS_ERR_EXPIRE = -25,    //算法库使用期限错误
	NET_STS_ERR_ENCRYPT = -24,    //加密错误

	//以下为组件接口函数使用的错误类型
	NET_STS_ERR_CALL_BACK = -23,    //回调函数出错
	NET_STS_ERR_OVER_MAX_MEM = -22,    //超过NET限定最大内存
	NET_STS_ERR_NULL_PTR = -21,    //函数参数指针为空（共用）

	//检查NET_KEY_PARAM、NET_KEY_PARAM_LIST成员变量的错误类型
	NET_STS_ERR_PARAM_NUM = -20,    //param_num参数不正确
	NET_STS_ERR_PARAM_VALUE = -19,    //value参数不正确或者超出范围
	NET_STS_ERR_PARAM_INDEX = -18,    //index参数不正确

	//检查cfg_type, cfg_size, prc_type, in_size, out_size, func_type是否正确
	NET_STS_ERR_FUNC_SIZE = -17,    //子处理时输入、输出参数大小不正确
	NET_STS_ERR_FUNC_TYPE = -16,    //子处理类型不正确
	NET_STS_ERR_PRC_SIZE = -15,    //处理时输入、输出参数大小不正确
	NET_STS_ERR_PRC_TYPE = -14,    //处理类型不正确
	NET_STS_ERR_CFG_SIZE = -13,    //设置、获取参数输入、输出结构体大小不正确
	NET_STS_ERR_CFG_TYPE = -12,    //设置、获取参数类型不正确

	//检查NET_IMAGE成员变量的错误类型
	NET_STS_ERR_IMG_DATA_NULL = -11,    //图像数据存储地址为空（某个分量）
	NET_STS_ERR_IMG_STEP = -10,    //图像宽高与step参数不匹配
	NET_STS_ERR_IMG_SIZE = -9,     //图像宽高不正确或者超出范围
	NET_STS_ERR_IMG_FORMAT = -8,     //图像格式不正确或者不支持

	//检查NET_MEM_TAB成员变量的错误类型
	NET_STS_ERR_MEM_ADDR_ALIGN = -7,     //内存地址不满足对齐要求
	NET_STS_ERR_MEM_SIZE_ALIGN = -6,     //内存空间大小不满足对齐要求
	NET_STS_ERR_MEM_LACK = -5,     //内存空间大小不够
	NET_STS_ERR_MEM_ALIGN = -4,     //内存对齐不满足要求
	NET_STS_ERR_MEM_NULL = -3,     //内存地址为空

	//检查ability成员变量的错误类型
	NET_STS_ERR_ABILITY_ARG = -2,     //ABILITY存在无效参数

	//通用类型
	NET_STS_ERR = -1,     //不确定类型错误（接口函数共用）
	NET_STS_OK = 0,     //处理正确（接口函数共用）
	NET_STS_WARNING = 1      //警告

}NET_STATUS_CODE;


#endif //_NET_DEF_H_

