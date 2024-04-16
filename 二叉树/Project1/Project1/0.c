//树
//对于树而言
//当n=0时,树是个空树
//当n>0时,他有很多子树,有且仅有一个根结点
//其余的结点也是一个个树,被称作子树
//树其实是个递归的定义,跟栈有一定的联系
//Lsubtree<-Root->Rsubtree
//            |
//        Msubtree
//一个结点可以有很多子树
//二叉树
//二叉树只有←子树和→子树
//二叉树中不存在度大于二的点
// 因为二叉树只有左子树和右子树,所以不存在大于二的点
// 左子树和右子树次序不能颠倒
// 树只有一个child就不用区分
// 二叉树不是树的特殊情况,要区分清楚,不是一个概念
// 用二叉树求解数学表达式的值
// 第一操作数 运算符 第二操作数
// 在二叉树中,左子树用来表达第一操作数 根节点用来表达运算符 右子树用来表达第二操作数
// 二叉树的抽象数据定义
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 																			//        ....._________ ..... 
																			//       ..    | ..  ..|     ..          
																			//      ..  .. |___-___|   .. .. 
																			//          👈   0.0   👉
																			//             |   o   |
																			//             |   o   |
																			//             /       \
																			//            /         \
																			//            ~~~~~~~~~~~
																			//            | |      | |
																			//            | |      | |
																			//            | |      | |
																			//            | |      | |
																			//            / |      | \
																	//            ~~~      ~~~
#define MAX_TREE_SIZE 100
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int TElemType;
typedef struct CTNode
{
	int child;
	struct CTNode* next;
}*ChildPtr;//child结点结构
typedef struct
{
	TElemType data;
	ChildPtr firstchild;
}CTBox;//孩子链表头指针
typedef struct
{
	CTBox nodes[MAX_TREE_SIZE];
	int n, r;//结点数和根节点的位置
};
