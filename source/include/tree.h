/***********************************************************************************************************************
* �ļ����ƣ�tree.h
* ժ    Ҫ������tree�ṹ���Լ���ط���
*
* ��ǰ�汾��0.1.0
* ��    �ߣ��첩��
* ��    �ڣ�2017-01-12
* ��    ע������
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
