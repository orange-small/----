#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status;
// Status 函数类型，值为函数结果状态，eg ok；

Status GetElem(SqList L, int i, ElemType *e)
{
	if(L.length == 0 || i>L.length)
	{
		return ERROR;
	}
	*e = L.data[i-1];
	return OK;
} 
