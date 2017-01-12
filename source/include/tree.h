/***********************************************************************************************************************
* 文件名称：tree.h
* 摘    要：构建tree结构体以及相关方法
*
* 当前版本：0.1.0
* 作    者：徐博文
* 日    期：2017-01-12
* 备    注：创建
***********************************************************************************************************************/

#ifndef TREE_H
#define TREE_H

typedef struct{
	int		*leaf;
	int		n;
	int		*parent;
	int		*group;
	char	**name;

	int		groups;
	int		*group_size;
	int		*group_offset;
} tree;

tree   *read_tree(char *filename);
void   hierarchy_predictions(float *predictions, int n, tree *hier, int only_leaves);
void   change_leaves(tree *t, char *leaf_list);
float  get_hierarchy_probability(float *x, tree *hier, int c);

#endif //TREE_H
