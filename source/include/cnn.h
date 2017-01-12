/***********************************************************************************************************************
*
* 文件名称：cnn.h
* 摘    要：定义网络参数
*
* 当前版本：0.1.0
* 作    者：徐博文
* 日    期：2017-01-12
* 备    注：创建
***********************************************************************************************************************/
#ifndef _CNN_H_
#define _CNN_H_

#include "layer.h"
#include "tree.h"

typedef struct network{

	float	gamma;
	float	scale;
	float	power;
	int		time_steps;
	int		step;
	int		max_batches;
	float   *scales;
	int     *steps;
	int		num_steps;
	int		burn_in;

	int		adam;
	float	B1;
	float	B2;
	float	eps;

	int		inputs;
	int		h, w, c;
	int		max_crop;
	int		min_crop;
	float	angle;
	float	aspect;
	float	exposure;
	float	saturation;
	float	hue; //hue parameter?

	int		gpu_index;
	tree	*hierarchy;

#ifdef GPU
	float **input_gpu;
	float **truth_gpu;
#endif
}network;

typedef struct network_state {
	float	*truth;
	float	*input;
	float	*delta;
	float	*workspace;
	int		train;
	int		index;
	network net;
}network_state;

#endif // _CNN_H_
