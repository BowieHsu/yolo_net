/***********************************************************************************************************************
*
* �ļ����ƣ�cnn.h
* ժ    Ҫ�������������
*
* ��ǰ�汾��0.1.0
* ��    �ߣ��첩��
* ��    �ڣ�2017-01-12
* ��    ע������
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
